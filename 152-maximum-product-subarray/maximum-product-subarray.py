class Solution:
    def maxProduct(self, nums: list[int]) -> int:
        maxi, mini, res = nums[0], nums[0], nums[0]
        for num in nums[1:]:
            mini, maxi = (
                min(num, num * mini, num * maxi), max(num, num * mini, num * maxi)
            )

            res = max(res, maxi)
        
        return res