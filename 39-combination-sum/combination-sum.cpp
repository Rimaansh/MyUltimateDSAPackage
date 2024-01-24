class Solution {
public:
    void solve(vector<int>& nums, int target, int ind, vector<int>& combi, vector<vector<int>>& res)
    {
        if(target == 0){
            res.push_back(combi);
            return;
        }
        
        if(ind < 0) return;

        //pick the number if it lest than or equal to the target right now
        if(nums[ind] <= target)
        {
            combi.push_back(nums[ind]);
            solve(nums, target - nums[ind], ind, combi, res); //not decrementing the index as 1 number can be chosen unlimited times
            combi.pop_back();
        }

        //not pick the number
        solve(nums, target, ind-1, combi, res);

        return;
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> combi;

        solve(candidates, target, candidates.size()-1, combi, res);

        return res;
    }
};