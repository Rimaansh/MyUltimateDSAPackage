class Solution(object):
    def kClosest(self, points, k):
        pq = []

        for xi, yi in points:
            dist = sqrt(xi**2 + yi**2)

            heapq.heappush(pq, (-dist, (xi, yi)))
            
            while len(pq) > k:
                heapq.heappop(pq)

        res = []
        for dist, point in pq:
            res.append(point)
        
        return res