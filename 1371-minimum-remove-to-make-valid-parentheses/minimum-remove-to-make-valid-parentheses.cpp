class Solution {
public:
    string minRemoveToMakeValid(string s) 
    {
        string res;
        int n = s.size();
        int open = 0;
        int close = 0;

        for(int i = 0; i<n; i++)
        {
            if(s[i] == '(') open++;
            else if(s[i] == ')'){
                if(open > 0) open--;
                else s[i] = '/';
            }
        }

        for(int i = n-1; i>=0; i--)
        {
            if(s[i] == ')') close++;
            else if(s[i] == '('){
                if(close > 0) close--;
                else s[i] = '/';
            }
        }

        for(auto it: s){
            if(it != '/') res.push_back(it);
        }

        return res;
    }
};