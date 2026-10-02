class Solution:
    def isAlienSorted(self, words: List[str], order: str) -> bool:
        #first differing character
        orderInd = {c: i for i, c in enumerate(order)}

        for i in range(len(words) - 1):
            w1 = words[i]
            w2 = words[i + 1]

            for j in range(len(w1)):
                if j == len(w2):
                    # w2 is a prefix of w1 and should've been before w1
                    # hence, return False
                    return False
                
                if w1[j] != w2[j]:
                    if orderInd[w2[j]] < orderInd[w1[j]]:
                        # found first differing character
                        # check if it is valid as per the ORDER given
                        # if not, return False
                        return False
                    break
        
        return True
