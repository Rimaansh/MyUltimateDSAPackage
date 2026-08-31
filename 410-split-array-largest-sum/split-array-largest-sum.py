class Solution:
    def splitArray(self, nums: List[int], k: int) -> int:
        lo = max(nums)
        hi = sum(nums)
        res = hi

        def check(maxSumPossible):
            sum = 0
            split = 1

            for num in nums:
                if sum + num > maxSumPossible:
                    sum = 0
                    split += 1
                
                sum += num
            
            return split <= k

        while lo <= hi:
            mid = (lo + hi) // 2
            if check(mid):
                res = mid
                hi = mid - 1
            else:
                lo = mid + 1
        
        return lo