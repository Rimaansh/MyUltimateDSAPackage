class Solution(object):
    def findWordsContaining(self, words, x):
        res = []

        for ind, word in enumerate(words):
            for ch in word:
                if ch == x:
                    res.append(ind)
                    break
        
        return res