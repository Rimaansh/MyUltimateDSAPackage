class Solution:
    def reverseWords(self, s: str) -> str:
        res = []
        s = s.strip()
        s = s + " "
        p = 0
        i = 0

        while i < len(s):
            if s[i] == " ":
                word = s[p : i]
                res.append(word)
                p = i + 1

                while p < len(s) and s[p] == " ":
                    p += 1

                i = p + 1
            else:
                i += 1

        return " ".join(res[::-1])