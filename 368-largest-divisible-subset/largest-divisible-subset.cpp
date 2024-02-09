class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> dp(n, 1), hash(n);

        int lastInd = 0, maxi = 1;

        for(int ind = 0; ind < n; ind++)
        {
            hash[ind] = ind;
            for(int prev_ind = 0; prev_ind < ind; prev_ind++)
            {
                if(nums[ind] % nums[prev_ind] == 0 && (1+dp[prev_ind]) > dp[ind])
                {
                    dp[ind] = 1 + dp[prev_ind];
                    hash[ind] = prev_ind;
                }
            }
            if(dp[ind] > maxi)
            {
                maxi = dp[ind];
                lastInd = ind;
            }
        }

        vector<int> res;
        res.push_back(nums[lastInd]);
        while(hash[lastInd] != lastInd){
            lastInd = hash[lastInd];
            res.push_back(nums[lastInd]);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
