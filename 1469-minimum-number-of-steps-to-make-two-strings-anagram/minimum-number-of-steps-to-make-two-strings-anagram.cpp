class Solution {
public:
    int minSteps(string s, string t) {
        map<char, int> mpp;
        for(char ch : s)
        {
            mpp[ch]++;
        }

        int steps = 0;

        for(char ch : t)
        {
            if(mpp[ch]!=0) mpp[ch]--;
            
        }

        for(auto it : mpp)
        {
            steps+=it.second;
        }

        return steps;
    }
};