class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int l = 0, r = 0;
        int n = cardPoints.size();
        int res = 0;
        while(r<k){
            res += cardPoints[r];
            r++;
        }

        r--; // we at k-1th index
        int currSum = res;
        while(r>=0)
        {
            currSum -= cardPoints[r];
            currSum += cardPoints[n-k+r];
            r--;
            res = max(res, currSum);
        }

        return res;
    }
};