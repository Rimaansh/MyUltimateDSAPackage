class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        balance, additions = 0, 0

        for ch in s:
            if ch == '(':
                balance += 1
            else:
                if balance > 0:
                    balance -= 1
                else:
                    additions += 1
            
        return (balance + additions)