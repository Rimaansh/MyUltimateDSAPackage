class Solution {
public:
    int findMaxK(vector<int>& nums) 
    {
        map<int, int> mpp;
        for(auto it: nums)
        {
            mpp[it]++;
        }    

        sort(nums.begin(), nums.end(), greater<int>());
        for(auto it: nums)
        {
            if(mpp[-it] > 0) return it;
        }

        return -1;
    }
};