class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> mpp;
        int n = order.length();
        for(int i = 0; i<n; i++) mpp[order[i]] = i+1;
        sort(s.begin(), s.end(), [&](char a, char b){
            return mpp[a] < mpp[b];
        });
        return s;
    }
};