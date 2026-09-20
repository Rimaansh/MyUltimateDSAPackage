class Solution(object):
    def jobScheduling(self, startTime, endTime, profit):
        n = len(startTime)
        jobs = [(startTime[i], endTime[i], profit[i]) for i in range(n)]
        maxProfit = 0
        jobs.sort(key = lambda x: (x[0], -x[2]))

        def findNextValidIndex(i, endTime):
            lo = i
            hi = n - 1

            while lo <= hi:
                mid = (lo + hi) // 2

                if jobs[mid][0] >= endTime:
                    hi = mid - 1
                else:
                    lo = mid + 1
                
            return lo

        def recur(i):
            if i == n:
                return 0

            if i in dp:
                return dp[i]
            
            # don't include the current interval
            notInclude = recur(i + 1)

            # if we include the current interval
            j = findNextValidIndex(i + 1, jobs[i][1])
            include = jobs[i][2] + recur(j)

            dp[i] = max(include, notInclude)
            return dp[i] 

        dp = {}
        return recur(0)