class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        cnt = 0
        majEle = None

        for num in nums:
            if num == majEle:
                cnt += 1
            elif cnt == 0:
                majEle = num
                cnt += 1
            else:
                cnt -= 1
            
        return majEle