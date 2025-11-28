class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int profit = 0;
        int n = prices.size();

        int minTillNow = prices[0];

    
        for(int i = 1; i < n; i++)
        {
            if(prices[i] < minTillNow) minTillNow = prices[i];
            else profit = max(profit, prices[i] - minTillNow);
        }

        return profit;
    }

};