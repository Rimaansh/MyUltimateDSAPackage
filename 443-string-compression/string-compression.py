class Solution:
    def compress(self, chars: list[str]) -> int:
        n, ind, i = len(chars), 0, 0

        while i < n:
            ch = chars[i]
            count = 0
            while i < n and chars[i] == ch:
                count += 1
                i += 1
            if count == 1:
                chars[ind] = ch
                ind += 1
            else:
                chars[ind] = ch
                ind += 1
                for digit in str(count):
                    chars[ind] = digit
                    ind += 1
                    
        chars[:] = chars[:ind]
        return ind