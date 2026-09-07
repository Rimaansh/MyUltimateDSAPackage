class Solution(object):
    def subarraySum(self, nums, k):
        res, sum = 0, 0
        prefixMap = {0 : 1}

        for num in nums:
            sum += num
            diff = sum - k

            res += prefixMap.get(diff, 0)
            
            prefixMap[sum] = prefixMap.get(sum, 0) + 1
        
        return res