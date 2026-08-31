class Solution(object):
    def wordBreak(self, s, wordDict):
        st = set(wordDict)
        n = len(s)

        dp = [False]*(n+1)
        dp[0] = True

        maxLen = max(len(_) for _ in wordDict)

        for i in range(n):
            if not dp[i]:
                continue
            
            for j in range(1, maxLen+1):
                if i+j <= n and s[i: i+j] in st:
                    dp[i+j] = True
                
        return dp[n]        