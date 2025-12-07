class Solution {
public:
    int mySqrt(int x) 
    {
        int pow = 1;
        while((pow) <= (x/pow)) pow++;

        return pow-1;
    }
};