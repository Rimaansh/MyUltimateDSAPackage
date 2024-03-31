class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int temp = x;
        int sod = 0;
        while(temp!=0)
        {
            sod += (temp%10);
            temp/=10;
        }
        if(x%sod == 0) return sod;
        else return -1;
    }
};