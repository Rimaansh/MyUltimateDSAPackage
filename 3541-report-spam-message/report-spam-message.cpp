class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        map<string, int> mpp;
        for(auto it: message) mpp[it]++;

        int c = 0;
        for(auto it: bannedWords) if(mpp[it] > 0) {
            c+=mpp[it];
            if(c>=2) return true;
            mpp[it] = -1;
        }

        return c>=2;
    }
};