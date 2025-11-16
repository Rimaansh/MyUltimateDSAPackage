class Solution {
public:
    bool isPalindrome(string s) 
    {
        int l = 0;
        int r = s.size() - 1;

        while(l < r)
        {
            char ch1 = s[l];
            char ch2 = s[r];

            //case where either is a uppercase character
            //doing it before the lowercase condition so that change can be made beforehand
            if(ch1 >= 'A' && ch1 <='Z') ch1 = (char)tolower(ch1);
            if(ch2 >= 'A' && ch2 <='Z') ch2 = (char)tolower(ch2);

            //case where both are valid lowercase characters
            if(
                ((ch1 >= 'a' && ch1 <='z') || (ch1 >= '0' && ch1 <='9')) 
                                           && 
                ((ch2 >= 'a' && ch2 <='z') || (ch2 >= '0' && ch2 <='9'))
            )
            {
                if(ch1 == ch2) {
                    l++;
                    r--;
                }
                else return false;
            }

            if(!(ch1 >= 'a' && ch1 <='z') && !(ch1 >= 'A' && ch1 <='Z') && !(ch1 >= '0' && ch1 <='9')) {
                l++;
            }
            if(!(ch2 >= 'a' && ch2 <='z') && !(ch2 >= 'A' && ch2 <='Z')  && !(ch2 >= '0' && ch2 <='9')) {
                r--;
            }
        }   

        return true; 
    }
};