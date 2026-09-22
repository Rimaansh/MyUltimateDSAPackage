class Solution:
    def findLadders(self, beginWord, endWord, wordList):
        words = set(wordList)

        if endWord not in words:
            return []

        parents = defaultdict(list)
        q = deque([beginWord])

        found = False

        while q and not found:
            level_used = set()

            for _ in range(len(q)):
                word = q.popleft()

                for i in range(len(word)):
                    for ch in "abcdefghijklmnopqrstuvwxyz":
                        if ch == word[i]:
                            continue

                        new_word = word[:i] + ch + word[i + 1:]

                        if new_word not in words:
                            continue

                        # First time seeing this word in this level
                        if new_word not in level_used:
                            q.append(new_word)
                            level_used.add(new_word)

                        # Every word in this level can be a parent
                        parents[new_word].append(word)

                        if new_word == endWord:
                            found = True

            # Remove only after processing the entire level
            for word in level_used:
                words.remove(word)

        if not found:
            return []

        ans = []

        def dfs(word, path):
            if word == beginWord:
                ans.append(path[::-1])
                return

            for parent in parents[word]:
                dfs(parent, path + [parent])

        dfs(endWord, [endWord])

        return ans