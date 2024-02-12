class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, ele;

        for(auto it : nums)
        {
            if(count == 0) ele = it;

            if(ele == it) count++;
            else count--;
        }

        return ele;
    }
};