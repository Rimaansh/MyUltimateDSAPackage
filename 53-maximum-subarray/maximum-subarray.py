class Solution:
    def maxSubArray(self, nums: list[int]) -> int:
        runningSum = 0
        res = float('-inf')

        for num in nums:
            runningSum += num
            res = max(res, runningSum)

            if runningSum < 0:
                runningSum = 0
        
        return res