class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        n = len(intervals)
        res = []

        intervals.sort(key = lambda x: x[0])

        if n == 1:
            return intervals
        
        prevInterval = intervals[0]

        for i in range(1, n):
            currStart = intervals[i][0]
            currEnd = intervals[i][1]

            prevStart = prevInterval[0]
            prevEnd = prevInterval[1]

            if currStart > prevEnd:
                res.append(prevInterval)
                prevInterval = intervals[i]
            else:
                intervals[i][0] = prevStart
                intervals[i][1] = max(currEnd, prevEnd)
                prevInterval = intervals[i]
                
        res.append(prevInterval)
        return res