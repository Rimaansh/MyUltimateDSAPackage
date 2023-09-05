//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int longestOnes(int n, vector<int>& arr, int m) {
        int l = 0;
        int r = 0; // to tackle the case where the first element is a 0

        
        int maxAns = 0;

        if (m >= n)
            return n;

        while (r < n)
        {
            if (arr[r] == 1)
            {
                r++;
                maxAns = max(maxAns, (r-l));

            }
            else
            {

                if (m > 0)
                {
                    r++;
                    m--;
                     maxAns = max(maxAns, (r-l));
                }
                else
                {

                    if (arr[l] == 0)
                    {
                        l++;
                    }
                    else
                    {
                        while (arr[l] != 0)
                        {
                            l++;
                        }
                        l++;
                    }
                    r++;
                }
            }
        }

        return maxAns;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        int k;
        cin >> k;

        Solution obj;
        cout << obj.longestOnes(n, nums, k) << endl;
    }
    return 0;
}
// } Driver Code Ends