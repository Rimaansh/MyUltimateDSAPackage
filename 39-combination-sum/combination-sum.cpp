class Solution {
public:
    void func(vector<int>& candidates, int target, int i, vector<int>& nums, vector<vector<int>>& res)
    {
        if(target == 0){
            res.push_back(nums);
            return;
        }

        if(i == candidates.size() || target < 0){
            return;
        }

        // Pick has two cases, take the same number again or go to the next so we will not
        // do i+1
        if(target - candidates[i] >= 0){
            nums.push_back(candidates[i]);
            func(candidates, target - candidates[i], i, nums, res);
            nums.pop_back();
        }

        //Not picking the current number
        func(candidates, target, i+1, nums, res);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<int> nums;
        vector<vector<int>> res;

        func(candidates, target, 0, nums, res);
        return res;
    }
};