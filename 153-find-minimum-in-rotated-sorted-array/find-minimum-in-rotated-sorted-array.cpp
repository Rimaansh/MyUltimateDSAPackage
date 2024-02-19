class Solution {
public:
    int findMin(vector<int>& arr) 
    {
        int n = arr.size();
        int lo = 0, hi = n-1;
        int mid, mini = INT_MAX;    

        while(lo <= hi)
        {
            mid = lo + (hi - lo)/2;
            mini = min(mini, arr[mid]);
            if(arr[mid] <= arr[hi]) //right part of the array is sorted
            {
                //it means that it cannot contain the minimum value
                hi = mid - 1;
            }
            else//left part is sorted
            {
                lo = mid+1;
            }
        }
        return mini;
    }
};