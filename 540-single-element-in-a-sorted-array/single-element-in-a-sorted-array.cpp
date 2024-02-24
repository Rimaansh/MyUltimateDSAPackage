class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();
        if(n == 1) return arr[0];
        if(arr[0] != arr[1]) return arr[0];
        if(arr[n-1] != arr[n-2]) return arr[n-1];
        int lo = 1;
        int hi = n-2;
        while(lo <= hi)
        {
            int mid = lo + (hi-lo)/2;

            if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]) return arr[mid];

            if((mid%2 == 0 && arr[mid-1] == arr[mid]) ||
                mid%2 == 1 && arr[mid+1] == arr[mid]) 
                {
                    //eliminate the right side
                    hi = mid - 1;
                }
            else{
                //eliminate the left side
                lo = mid + 1;
            }
        }
        return -1;
    }
};

//[1,1,2,3,3,4,4,8,8]
// 0 1 2 3 4 5 6 7 8

// before the single element
// pairs are (odd, even) => (1, 1)

//after the single element
//pairs are (even, odd) => (3, 3), (4, 4), (8, 8)