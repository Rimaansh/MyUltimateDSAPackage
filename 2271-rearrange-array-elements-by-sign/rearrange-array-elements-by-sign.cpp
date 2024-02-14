class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        vector<int> pos, neg, res;

        for(auto it : nums){
            if(it > 0) pos.push_back(it);
            else if(it < 0) neg.push_back(it);
        }

        int plen = pos.size(), nlen = neg.size();
        int i = 0, j = 0;
        while(i < plen && j < nlen)
        {
            res.push_back(pos[i++]);
            res.push_back(neg[j++]);
        }

        return res;
    }
};