class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(auto it : nums){
            mpp[it]++;
        }

        set<int> st;
        for(auto it: mpp){
            st.insert(it.second);
        }

        int maxF = *st.rbegin();

        int c = 0;
        for(auto it: mpp)
        {
            if(it.second == maxF){
                c+=it.second;
            }
        }

        return c;
    }
};
