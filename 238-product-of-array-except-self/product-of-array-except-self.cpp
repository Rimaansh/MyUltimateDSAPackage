class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        vector<int> left, right;
        int pro = 1;
        for(int i = 0; i<nums.size(); i++)
        {
            left.push_back(pro);
            pro*=nums[i];
        }

        pro = 1;
        for(int i = nums.size()-1; i>=0; i--)
        {
            right.push_back(pro);
            pro*=nums[i];
        }

        for(int i = 0; i<nums.size(); i++)
        {
            left[i] *= right[nums.size() - i - 1];
        }
        return left;
    }
};