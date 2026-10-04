class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        def recur(ind, buy):
            if ind >= n:
                return 0

            if (ind, buy) in dp:
                return dp[(ind, buy)]
            
            if buy:
                #buy 
                do = -prices[ind] + recur(ind + 1, not buy) 

                #skip
                dont = 0 + recur(ind + 1, buy)
            else:
                #sell
                do = prices[ind] + recur(ind + 2, not buy) 

                #skip
                dont = 0 + recur(ind + 1, buy)

            dp[(ind, buy)] = max(do, dont)
            return dp[(ind, buy)]
        
        dp = {}
        n = len(prices)
        return recur(0, True)