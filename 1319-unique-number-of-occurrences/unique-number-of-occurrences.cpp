class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        map<int, int> mpp;
        map<int, int> occur;

        for(auto it : arr)
        {
            mpp[it]++;
        }    
        
        for(auto it : mpp)
        {
            //cout<<it.first<<" "<<it.second<<endl;
            occur[it.second]++;
        }

        for(auto it : occur)
        {
            //cout<<it.first<<" "<<it.second<<endl;
            if(it.second > 1) return false;
        }

        return true;
    }
};