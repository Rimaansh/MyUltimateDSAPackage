class Solution(object):
    def majorityElement(self, nums):
        cnt1, cnt2 = 0, 0
        majEle1, majEle2 = None, None

        for num in nums:
            if num == majEle1:
                cnt1 += 1
            elif num == majEle2:
                cnt2 += 1
            elif cnt1 == 0:
                majEle1 = num
                cnt1 += 1
            elif cnt2 == 0:
                majEle2 = num
                cnt2 += 1
            else:
                cnt1 -= 1
                cnt2 -= 1
        
        cnt1, cnt2 = 0, 0
        for num in nums:
            if num == majEle1:
                cnt1 += 1

            if num == majEle2:
                cnt2 += 1

        res = []
        
        if cnt1 > len(nums)//3:
            res.append(majEle1)

        if cnt2 > len(nums)//3 and majEle2 != majEle1:
            res.append(majEle2)
        
        return res

