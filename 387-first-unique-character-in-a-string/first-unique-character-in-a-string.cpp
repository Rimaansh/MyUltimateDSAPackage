class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> mpp;

        for(auto it : s) mpp[it]++;

        for(int i = 0; i<s.length(); i++) {
            if(mpp[s[i]] == 1) return i;
        }

        return -1;
    }
};