class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:    
        res = defaultdict(list)

        for word in strs:
            mpp = [0] * 26

            for ch in word:
                mpp[ord(ch) - ord('a')] += 1
            
            res[tuple(mpp)].append(word)
        
        return list(res.values())