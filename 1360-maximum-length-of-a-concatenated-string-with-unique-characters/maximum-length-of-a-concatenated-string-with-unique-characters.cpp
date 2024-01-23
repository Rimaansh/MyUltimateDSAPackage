class Solution {
public:
    int solve(vector<string>& arr, int ind, unordered_set<char>& st)
    {
        if(ind < 0) {
            return st.size();
        }

        bool flag = true;
        string word = arr[ind];

        for(auto it : word)
        {
            if(st.count(it) > 0) {
                flag = false;
                break;
            }
        }

        //check if the strings which have been inserted before have the same
        //characters as that of the one we are trying to add in the current recursive call

        int pick = 0, notPick = 0;
        
        //check if the string itself has some repeating characters
        map<char, int> check;
        for(auto it:word)
        {
            check[it]++;
        }

        for(auto it:word)
        {
            if(check[it] > 1) flag = false;
        }

        //pick the string if it is possible
        if(flag)
        {
            for(auto it: word){
                st.insert(it);
            } 

            pick = solve(arr, ind-1, st);

            for(auto it: word){
                st.erase(it);
            } 
        }

        //not pick the string
        notPick = solve(arr, ind-1, st);

        return max(pick, notPick);
    }

    int maxLength(vector<string>& arr) 
    {
        int n = arr.size();
        unordered_set<char> st;

        return solve(arr, n-1, st);
    }
};