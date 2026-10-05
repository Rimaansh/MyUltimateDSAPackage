class Solution(object):
    def wordBreak(self, s, wordDict):
        words = set(wordDict)
        n = len(s)
        dp = [False] * (n + 1)
        dp[0] = True
        maxLenWord = max(len(word) for word in wordDict) 

        for i in range(n):
            if not dp[i]:
                continue
            
            for j in range(1, maxLenWord + 1):
                if i + j <= n and s[i : i + j] in words:
                    dp[i + j] = True 
                
        return dp[n]