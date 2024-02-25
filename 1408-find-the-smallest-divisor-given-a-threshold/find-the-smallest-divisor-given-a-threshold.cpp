class Solution {
public:
    bool check(vector<int>& nums, int threshold, int mid)
    {
        int s = 0;
        for(auto it: nums)
        {
            s = s + ceil((double)it/mid);
        }
        return s <= threshold;
    }

    int smallestDivisor(vector<int>& nums, int threshold) 
    {
        int lo = 1;
        int hi = *max_element(nums.begin(), nums.end());
        int ans = hi;

        while(lo <= hi)
        {
            int mid = lo + (hi-lo)/2;
            if(check(nums, threshold, mid)){
                ans = min(ans, mid);
                hi = mid - 1;
            }
            else lo = mid + 1;
        }

        return ans;
    }
};