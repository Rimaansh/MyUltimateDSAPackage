class Solution {
public:
    void func(vector<int>& candidates, int target, int i, vector<int>& nums, vector<vector<int>>& res, map<vector<int>, int>& mpp)
    {
        if(target == 0){
            if(mpp.find(nums) == mpp.end()){
                res.push_back(nums);
                mpp[nums]++;
                return;
            }
            else return;
        }

        if(i == candidates.size() || target < 0){
            return;
        }

        // Pick has two cases, take the same number again or go to the next
        if(target - candidates[i] >= 0){
            nums.push_back(candidates[i]);
            func(candidates, target - candidates[i], i, nums, res, mpp);
            func(candidates, target - candidates[i], i+1, nums, res, mpp);
            nums.pop_back();
        }

        //Not picking the current number
        func(candidates, target, i+1, nums, res, mpp);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<int> nums;
        vector<vector<int>> res;
        map<vector<int>, int> mpp;

        func(candidates, target, 0, nums, res, mpp);
        return res;
    }
};