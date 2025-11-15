class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        unordered_map<int, int> mpp;

        for(int i = 0; i<nums.size(); i++)
        {
            int val = nums[i];

            if((mpp.find(val) != mpp.end()) && abs(mpp[val] - i) <=k) return true;

            mpp[val] = i;
        }

        return false;
    }
};