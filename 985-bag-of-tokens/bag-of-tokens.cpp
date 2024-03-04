class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power)
    {
        int n = tokens.size();
        sort(tokens.begin(), tokens.end());
        int score = 0, res = 0;
        int i = 0, j = n - 1;
        while(i<=j)
        {
            if(tokens[i] <= power)
            {
                //do a face up when possible
                //otherwise do a facedown through else part
                score++;
                res = max(res, score);
                power = power - tokens[i];
                i++;
            }
            else if(score >= 1)
            {
                score--;
                power = power + tokens[j];
                j--;
            }
            else break;
        }
        return res;
    }
};