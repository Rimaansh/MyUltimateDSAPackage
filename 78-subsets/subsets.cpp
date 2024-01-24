class Solution {
public:
    void solve(vector<vector<int>>& res, vector<int>& nums, int ind, vector<int>& temp)
    {
        if(ind == nums.size()) {
            res.push_back(temp);
            return;
        }

        //not pick
        solve(res, nums, ind+1, temp);

        //pick the current number
        temp.push_back(nums[ind]);
        solve(res, nums, ind+1, temp);
        temp.pop_back();

        return;
    }

    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>> res;
        vector<int> temp;

        solve(res, nums, 0, temp);

        return res;
    }
};