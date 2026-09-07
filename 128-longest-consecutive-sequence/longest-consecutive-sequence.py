class Solution(object):
    def longestConsecutive(self, nums):
        hashmap = {}
        res = 0

        for num in nums:
            hashmap[num] = True

        for num in hashmap:
            if num - 1 not in hashmap:
                length = 0
                current = num

                while current in hashmap:
                    length += 1
                    current += 1

                res = max(res, length)

        return res
        