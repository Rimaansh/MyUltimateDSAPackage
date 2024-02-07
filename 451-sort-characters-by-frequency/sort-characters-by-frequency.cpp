class Solution {
public:
    string frequencySort(string s) 
    {
        
        map<char, int> mpp;
        string res = "";

        for(char c : s)
        {
            mpp[c]++;
        }

        vector<pair<char, int> > data(mpp.begin(), mpp.end());   

        sort(data.begin(), data.end(), [](pair<char, int>& a, pair<char, int>& b) {
            return a.second > b.second;
        });

        for(auto it : data)
        {
            res += string(it.second, it.first);
        }

        return res;
    }

    
};