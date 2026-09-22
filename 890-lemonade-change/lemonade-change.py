class Solution:
    def lemonadeChange(self, bills: list[int]) -> bool:
        fc = 0
        tc = 0 
        twc = 0

        for bill in bills:
            if bill == 5:
                fc += 1
            elif bill == 10:
                tc += 1
                if fc > 0:
                    fc -= 1
                else:
                    return False
            elif bill == 20:
                twc += 1
                if tc > 0:
                    tc -= 1
                    if fc > 0:
                        fc -= 1
                    else:
                        return False
                elif fc >= 3:
                    fc -= 3
                else:
                    return False
            else:
                return False
            
        return True