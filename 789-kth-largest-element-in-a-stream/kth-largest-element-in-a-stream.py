class KthLargest(object):
    def __init__(self, k, nums):
        self.pq = []
        self.k = k

        for val in nums:
            heapq.heappush(self.pq, val)
        
        while len(self.pq) > self.k:
            heapq.heappop(self.pq)

    def add(self, val):
        heapq.heappush(self.pq, val)

        while len(self.pq) > self.k:
            heapq.heappop(self.pq)
        
        return self.pq[0]

# Your KthLargest object will be instantiated and called as such:
# obj = KthLargest(k, nums)
# param_1 = obj.add(val)