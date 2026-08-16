class Solution:
    def rob(self, money: List[int]) -> int:
        if len(money) == 0:
            return 0

        if len(money) == 1:
            return money[0]

        def nonAdjacent(nums):
            n = len(nums)

            if n == 1:
                return nums[0]

            dp = [0]*(n)
            dp[0] = nums[0]
            dp[1] = max(nums[0], nums[1])

            for i in range(2, n):
                pick = dp[i - 2] + nums[i]
                notPick = dp[i-1] + 0

                dp[i] = max(pick, notPick)
            
            return dp[n-1]
                
        return max(nonAdjacent(money[1:]), nonAdjacent(money[:-1]))
