class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        int sum = 0;
        for(auto it:nums) sum+=it;  

        map<int, int> mpp;  
        for(auto it:nums) mpp[it]++;

        int dup;

        for(auto it : mpp){
            if(it.second == 2) {
                dup = it.first;
                break;
            }
        }

        int s = (nums.size() * (nums.size() + 1))/2;
        // cout<<s<<" ";
        s = s - sum + dup;

        vector<int> res;

        // cout<<sum<<" "<<dup<<" "<<s<<endl;
        res.push_back(dup);
        res.push_back(s);

        return res;
    }
};