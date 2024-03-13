#define long long int
class Solution {
public:
    int pivotInteger(int n) {
        int s1 = (n*(n+1))/2;
        int s2 = n;

        int num = n;
        while(num > 0)
        {
            if(s1 == s2) return num;
            else
            {
                // s1 = s1 - num;
                s2 = s2 + num;
                num--;
                s1 = s1 - num;
            }
        }
        return -1;
    }
};