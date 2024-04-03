class Solution {
public:
    int numberOfSubstrings(string s) 
    {
        map<char, int> mpp;

        int l, r, n = s.length();
        int res = 0;

        for(l = 0, r = 0; r<n; r++)
        {
            mpp[s[r]]++;
            while(mpp.size() == 3)
            {
                res = res + (n - r);
                mpp[s[l]]--;
                if (mpp[s[l]] == 0) mpp.erase(s[l]);
                l++;
            }
        }    

        return res;
    }
};