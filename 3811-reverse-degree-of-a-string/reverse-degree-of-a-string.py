class Solution(object):
    def reverseDegree(self, s):
        res = 0

        for i, ch in enumerate(s):
            res += ((i + 1) * (26 - (ord(ch) - ord('a'))))
        
        return res