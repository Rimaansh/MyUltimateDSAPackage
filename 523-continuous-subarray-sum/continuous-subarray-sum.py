class Solution(object):
    def checkSubarraySum(self, nums, k):
        mpp = {0 : -1} # remainder -> index
        sum = 0

        for ind, num in enumerate(nums):
            sum += num
            remainder = sum % k

            if remainder in mpp and ind - mpp[remainder] >= 2:
                return True
            elif remainder not in mpp:
                mpp[remainder] = ind            

        return False