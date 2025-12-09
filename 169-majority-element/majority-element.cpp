class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n = nums.size();
        int ele = nums[0], c = 1;

        for(int i = 1; i < n; i++)
        {
            if(nums[i] == ele) c++;
            else 
            {
                c--;
                if(c == 0)
                {
                    ele = nums[i];
                    c = 1;
                }
            }
        }

        return ele;
    }
};