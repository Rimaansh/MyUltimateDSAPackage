//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{

public:
    void helper(int size, int last, vector<int> &str, int num)
    {
        if(size == num){
            for(auto it:str) cout<<it;
            cout<<" ";
            return;
        }
        
        if(last == 1){
            str.push_back(0);
            helper(size+1, 0, str, num);
            str.pop_back();
        }
        else{
            
            str.push_back(0);
            helper(size+1, 0, str, num);
            str.pop_back();
            
            str.push_back(1);
            helper(size+1, 1, str, num);
            str.pop_back();
        }
    }
    
    void generateBinaryStrings(int num)
    {
        vector<int> str, str2;
            
        str.push_back(0);
        helper(1, 0, str, num);
        str.pop_back();
        
        
        
        str2.push_back(1);
        helper(1, 1, str2, num);
        str2.pop_back();
        
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        obj.generateBinaryStrings(n);
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends