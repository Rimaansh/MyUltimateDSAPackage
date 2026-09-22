class Solution(object):
    def lastStoneWeight(self, stones):
        pq = []
        for stone in stones:
            heapq.heappush(pq, -stone)
        
        while len(pq) > 1:
            val1 = -heapq.heappop(pq)
            val2 = -heapq.heappop(pq)

            if val1 == val2:
                continue
            
            heapq.heappush(pq, -abs(val1 - val2))
        
        return -pq[0] if len(pq) != 0 else 0
        