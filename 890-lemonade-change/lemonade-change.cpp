class Solution {
public:
    bool lemonadeChange(vector<int>& bills) 
    {
        int fc = 0, tc = 0, twc = 0;
        for(auto it: bills)
        {
            if(it == 5) fc++;
            else if(it == 10){
                tc++;
                if(fc > 0) fc--;
                else return false;
            }
            else if(it == 20){
                twc++;
                if(tc > 0) {
                    tc--;
                    if(fc > 0){
                        fc--;
                    }
                    else return false;
                }
                else if(fc >= 3) {
                    fc -= 3;
                }
                else return false;
            }
        }    
        return true;
    }
};