class Solution {
public:
    string removeDuplicates(string s) 
    {
        string res = "";
        for(auto it: s)
        {
            if(res.empty() || res.back() != it)
            {
                res.push_back(it);
            }
            else res.pop_back();
        }

        return res;
    }
};
