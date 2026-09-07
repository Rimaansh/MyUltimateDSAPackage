class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        pre = 1
        suff = 1
        res = [1] * n

        for i in range(n):
            res[i] *= pre
            pre *= nums[i]

            res[n - i - 1] *= suff
            suff *= nums[n - i - 1]

        return res