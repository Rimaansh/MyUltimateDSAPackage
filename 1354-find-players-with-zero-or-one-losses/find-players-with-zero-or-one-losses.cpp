class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) 
    {
        map<int, pair<int, int> > mpp;
        //.  id.      won  lost
        
        for(auto match : matches)
        {
            mpp[match[0]].first++;
            mpp[match[1]].second++;
        }

        vector<vector<int>> res(2);

        for(auto it : mpp)
        {
            if(it.second.first > 0 && it.second.second == 0){
                res[0].push_back(it.first);
            }

            if(it.second.second == 1){
                res[1].push_back(it.first);
            }
        }

        return res;
            
        
        
    }
};