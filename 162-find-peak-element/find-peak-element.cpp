class Solution {
public:
    int findPeakElement(vector<int>& arr) 
    {
        int n = arr.size();
        if(n == 1) return 0; //arr[0];

        if(arr[0] > arr[1]) return 0; //arr[0];
        if(arr[n-1] > arr[n-2]) return n-1; //arr[n-1];

        int lo = 1, hi = n-2;

        while(lo <= hi)
        {
            int mid = lo + (hi - lo)/2;

            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) return mid; //arr[mid];
            else if (arr[mid] > arr[mid-1])
            {
                //you are on the increasing slope
                lo = mid+1;
            }
            else if (arr[mid] > arr[mid+1])
            {
                //you are on the decreasing slope
                hi = mid-1;
            }
            else
            {
                //since, multiple peaks, you are somewhere at the lowest postion
                //        /\     /\
                //       /  \   /  \
                //      /    \ /    \
                //            ^
                //you are here, so you could go either to the left or the right
                lo = mid+1;
            }
        }
        return -1;
    }
};