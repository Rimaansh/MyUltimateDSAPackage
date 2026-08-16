class Solution:
    def minDays(self, bloomDay: List[int], m: int, k: int) -> int:
        def check(mid):
            bCounter = 0
            current = 0
            for day in bloomDay:
                if day <= mid:
                    current += 1
                    if current == k:
                        current = 0
                        bCounter += 1
                else:
                    current = 0
                
            return bCounter >= m

        lo = 1
        hi = max(bloomDay)
        res = -1

        while lo <= hi:
            mid = (lo + hi)//2

            if check(mid):
                res = mid
                hi = mid - 1
            else:
                lo = mid + 1

        return res