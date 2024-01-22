class Solution {
public:
    int maxProfit(vector<int>& arr) 
    {
        int minTillNow = arr[0];
        int maxP = 0;

        for(int i = 1; i<arr.size(); i++)
        {
            maxP = max(maxP, (arr[i] - minTillNow));
            minTillNow = min(minTillNow, arr[i]); 
        }    

        return maxP;
    }
};