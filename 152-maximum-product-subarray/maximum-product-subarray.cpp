class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod1 = nums[0], prod2 = nums[0], temp, res = nums[0];

        for(int i = 1; i<nums.size(); i++)
        {
            int it = nums[i];

            temp = max({it, prod1*it, prod2*it});
            prod2 = min({it, prod1*it, prod2*it});
            prod1 = temp;

            res = max(res, prod1);
        }

        return res;
    }
};