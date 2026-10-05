class Solution:
    def numDecodings(self, s: str) -> int:
        def recur(ind):
            if ind == n:
                return 1

            if ind in dp:
                return dp[ind]

            # Single digit
            if s[ind] == "0":
                return 0

            res = recur(ind + 1)

            if ind + 1 < n and 10 <= int(s[ind:ind + 2]) <= 26:
                res += recur(ind + 2)

            dp[ind] = res
            return res

        n = len(s)
        dp = {}

        return recur(0)