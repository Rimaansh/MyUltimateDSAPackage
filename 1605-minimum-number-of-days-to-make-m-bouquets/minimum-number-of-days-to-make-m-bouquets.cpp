class Solution {
public:
    bool check(vector<int>& bloomDay, int m, int k, int mid)
    {
        int c = 0;
        for(auto it : bloomDay){
            if(it <= mid){
                c++;
                if(c == k){
                    m--;
                    c = 0;
                }
            }
            else c = 0;
        }
        return m <= 0;
    }

    int minDays(vector<int>& bloomDay, int m, int k) 
    {
        int n = bloomDay.size();
        if(m > n/k) return -1; // checking (m*k > n), use divide to avoid integer overflow

        int lo = *min_element(bloomDay.begin(), bloomDay.end());
        int hi = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = hi;

        while(lo <= hi)
        {
            int mid = lo + (hi-lo)/2;

            if(check(bloomDay, m, k, mid))
            {
                ans = min(ans, mid);
                hi = mid - 1;
            }
            else lo = mid + 1;
        }

        return ans;
    }
};