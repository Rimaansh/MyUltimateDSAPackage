class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        n = len(prices)
        dp = [[-1] * 2 for _ in range(n)]

        def func(ind, buyFlag):
            if ind == n:
                return 0
            
            if dp[ind][buyFlag] != -1:
                return dp[ind][buyFlag]
            
            profit = 0

            if buyFlag:
                profit = max(func(ind+1, True), -prices[ind] + func(ind+1, False))
            else:
                profit = max(func(ind+1, False), prices[ind] + func(ind+1, True))
            
            dp[ind][buyFlag] = profit
            return profit

        return func(0, True)
        