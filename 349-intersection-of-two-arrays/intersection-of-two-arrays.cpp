class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> mpp;
        set<int> st;
        vector<int> res;
        for(auto it: nums1) mpp[it]++;
        for(auto it: nums2) if(mpp[it]>=1) st.insert(it);
        for(auto it: st) res.push_back(it);
        return res;
    }
};