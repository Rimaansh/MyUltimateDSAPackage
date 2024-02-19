class Solution {
public:
    int search(vector<int>& arr, int target) 
    {
        int n = arr.size();
        int lo = 0, hi = n - 1; 
        int mid;

        while(lo <= hi)
        {
            mid = lo + (hi-lo)/2;
            if(arr[mid] == target) return mid;
            else
            {
                if(arr[0] <= arr[mid]) // means that the left half is sorted, so directly check
                {
                    if(arr[lo] <= target && target <= arr[mid]){
                        hi = mid - 1;
                    }
                    else{
                        lo = mid + 1;
                    }
                }
                else // right half is sorted
                {
                    if(arr[mid] <= target && target <= arr[hi]){
                        lo = mid + 1;
                    }
                    else{
                        hi = mid - 1;
                    }
                }
            }
        }

        return -1;
    }
};