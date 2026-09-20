class Solution(object):
    def longestSubsequence(self, arr, difference):
        dp = {}
        for x in arr:
            dp[x] = dp.get(x - difference, 0) + 1

        return max(dp.values())