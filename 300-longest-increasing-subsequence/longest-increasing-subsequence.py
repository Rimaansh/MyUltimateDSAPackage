class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        n = len(nums)
        dp = [-1] * n

        def dfs(i):
            if dp[i] != -1:
                return dp[i]

            best = 1

            for j in range(i):
                if nums[j] < nums[i]:
                    best = max(best, dfs(j) + 1)

            dp[i] = best
            return dp[i]

        res = 0

        for i in range(n):
            res = max(res, dfs(i))

        return res