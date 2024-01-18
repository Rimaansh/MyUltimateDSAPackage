class Solution {
public:
    int longestPalindromeSubseq(string s) 
    {
        string t = s;
        int n = s.length();
        reverse(t.begin(), t.end());

        vector<vector<int> >dp(n+1, vector<int>(n+1, 0));

        for(int i = 0; i<n+1; i++){
            dp[i][0] = 0;
        }   

        for(int i = 0; i<n+1; i++){
            dp[0][i] = 0;
        }

        for(int i = 1; i<=n; i++)
        {
            for(int j = 1; j<=n; j++)
            {
                if(s[i-1] == t[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j] = 0 + max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }

        string res = "";

        int i = s.length();
        int j = s.length();

        while(i>0 && j>0){
            if(s[i-1] == t[j-1]){
                res += s[i-1];
                i--;
                j--;
            }else{
                if(dp[i][j-1] > dp[i-1][j]){
                    j--;
                }else{
                    i--;
                }
            }
        }

        return res.length();
    }
};