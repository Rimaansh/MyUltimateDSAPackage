class Solution:
    def combinationSum4(self, nums: List[int], target: int) -> int:
        def dfs(target):
            if target == 0:
                return 1

            if target in dp:
                return dp[target]

            ways = 0

            for num in nums:
                if num <= target:
                    ways += dfs(target - num)

            dp[target] = ways
            return ways

        dp = {}
        return dfs(target)