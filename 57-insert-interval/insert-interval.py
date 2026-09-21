class Solution(object):
    def insert(self, intervals, newInterval):
        res = []
        # find where to insert
        i, n = 0, len(intervals)
        while i < n and intervals[i][1] < newInterval[0]:
            res.append(intervals[i])
            i += 1
    
        # insert it, then keep moving forward till the next intervals are < the newInterval END
        while i < n and intervals[i][0] <= newInterval[1]:
            newInterval[0] = min(intervals[i][0], newInterval[0])
            newInterval[1] = max(intervals[i][1], newInterval[1])
            i += 1
        
        res.append(newInterval)

        # add the remaining intervals in the result
        while i < n:
            res.append(intervals[i])
            i += 1

        return res  