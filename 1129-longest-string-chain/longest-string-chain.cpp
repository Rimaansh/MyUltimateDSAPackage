class Solution {
public:
    static bool compForLoop(string s1, string s2)
    {
        return s1.size() < s2.size();
    }

    bool checkPossibility(string s1, string s2)
    {
        if(s1.size() != s2.size()+1) return false;

        int first = 0, second = 0;
        while(first < s1.size())
        {
            if(s1[first] == s2[second]){
                first++;
                second++;
            }
            else{
                first++;
            }
        }

        if(first == s1.size() && second == s2.size()) return true;
        else return false;
    }

    int longestStrChain(vector<string>& words) {
        //sort the strings because question asked for a sequence and not a subsequence
        sort(words.begin(), words.end(), compForLoop); 
        int i, j, n = words.size(), maxi = INT_MIN;

        vector<int> dp(n, 1);

        for(i = 0; i<n; i++)
        {
            for(j = 0; j<i; j++)
            {
                if(checkPossibility(words[i], words[j]) && dp[i] < dp[j] + 1){
                    dp[i] = dp[j] + 1;
                }
            }
            maxi = max(maxi, dp[i]);
        }

        return maxi;
    }
};