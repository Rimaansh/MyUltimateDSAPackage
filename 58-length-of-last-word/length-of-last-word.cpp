class Solution {
public:
    int lengthOfLastWord(string s) {
        int end = s.size() - 1;
        int len = 0;
        while(end >= 0 && s[end] == ' ') end--;

        int start = end;

        while(start >= 0 && s[start] != ' ')
        {
            len++;
            start--;
        }

        return end - start;
    }
};