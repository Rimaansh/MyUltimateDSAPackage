class Solution {
public:
    bool check(vector<int> &stalls, int k, int mid)
    {
        int n = stalls.size();
        int prevCowPosition = 0;
        k = k-1;
        for(int i = 1; i<n; i++)
        {
            if(stalls[i] - stalls[prevCowPosition] >= mid)
            {
                prevCowPosition = i;
                k--;
            }
        }
        return k <= 0;
    }
    int maxDistance(vector<int>& stalls, int k) {
        sort(stalls.begin(), stalls.end());
        int n = stalls.size();
        int maxDiffPossible = stalls[n - 1] - stalls[0];
        int lo = 1;
        int hi = maxDiffPossible;
        int ans = 0;

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;

            if (check(stalls, k, mid)) {
                ans = max(ans, mid);
                lo = mid + 1; // Increase minimum distance
            } else {
                hi = mid - 1; // Decrease minimum distance
            }
        }

        return ans;
    }
};