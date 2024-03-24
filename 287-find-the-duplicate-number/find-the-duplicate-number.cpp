class Solution {
public:
    void swap(vector<int>& nums, int i, int j)
    {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

    int findDuplicate(vector<int>& nums) 
    {
        int i = 0;
        while(i < nums.size())
        {
            int correctIndex = nums[i] - 1;
            if(nums[i] != nums[correctIndex]) swap(nums, i, correctIndex);
            else i++;
        }

        for(int index = 0; index<nums.size(); index++)
        {
            if(nums[index] != index+1) return nums[index];
        }
        return nums.size();
    }
};