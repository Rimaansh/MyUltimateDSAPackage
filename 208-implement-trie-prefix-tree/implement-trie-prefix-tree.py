class TrieNode(object):
    def __init__(self):
        self.links = [None] * 26
        self.flag = False

class Trie(object):
    def __init__(self):
        self.root = TrieNode()

    def insert(self, word):
        node = self.root

        for ch in word:
            idx = ord(ch) - ord('a')

            if node.links[idx] is None:
                node.links[idx] = TrieNode()

            node = node.links[idx]

        node.flag = True

    def search(self, word):
        node = self.root

        for ch in word:
            idx = ord(ch) - ord('a')

            if node.links[idx] is None:
                return False

            node = node.links[idx]

        return node.flag

    def startsWith(self, prefix):
        node = self.root

        for ch in prefix:
            idx = ord(ch) - ord('a')

            if node.links[idx] is None:
                return False

            node = node.links[idx]

        return True

# Your Trie object will be instantiated and called as such:
# obj = Trie()
# obj.insert(word)
# param_2 = obj.search(word)
# param_3 = obj.startsWith(prefix)