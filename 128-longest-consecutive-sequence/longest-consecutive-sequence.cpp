class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        if(nums.size() == 0 || nums.size() == 1) return nums.size();

        set<int> st;
        for(auto it: nums) st.insert(it);

        int prev = INT_MIN, res = 1, c = 1;
        for(auto it: st)
        {
            if(prev == INT_MIN) prev = it;
            else
            {
                if(prev + 1 == it) c++;
                else c = 1;
                prev = it;
                res = max(res, c);
            }
        }
        return res;
    }
};