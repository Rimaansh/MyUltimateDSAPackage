class Solution {
public:
    bool helper(string s, int i, int j)
    {
        while(i<j)
        {
            if(s.at(i) == s.at(j)){
                i++;
                j--;
            }
            else 
            {
                return false;
            }
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i = 0, j = s.length() - 1;

        while(i<j)
        {
            if(s.at(i) == s.at(j)){
                i++;
                j--;
            }
            else 
            {
                return helper(s, i+1, j) || helper(s, i, j-1);
            }
        }
        
        return true;
    }
};