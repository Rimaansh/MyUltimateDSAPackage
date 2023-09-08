//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  private:
  
    long long int ans = 0;
    
        void merge(long long arr[], long l, long h, long mid)
        {   
            long int k = l;
            
            long int c[h + 1];
           long  int i = l, j = mid+1;
            
            while(i<= mid && j<=h)
            {
                if(arr[i] <= arr[j]) {
                    c[k++] = arr[i++];
                }
                else {
                    c[k++] = arr[j++];
                ans += (mid - i + 1); // Count inversions
                }
            }
            
            while(i<= mid){
                c[k++] = arr[i++];
            }
            
            while(j<=h){
                c[k++] = arr[j++];
                
            }
            
            for(i = l; i<=h; i++) arr[i] = c[i];
        }
    
        void mergeSort(long long arr[], long low, long high)
        {
        if (low < high) 
        {
            long long mid = (low + high) / 2;
    
            // Recursively sort the two halves
            mergeSort(arr, low, mid);
            mergeSort(arr, mid + 1, high);
    
            // Merge the sorted halves
            merge(arr, low, high, mid);
        }
}

    
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long N)
    {
        mergeSort(arr, 0, N-1);
        return ans;
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends