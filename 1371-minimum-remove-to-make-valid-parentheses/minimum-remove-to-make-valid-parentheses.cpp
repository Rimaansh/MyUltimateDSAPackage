class Solution {
public:
    string minRemoveToMakeValid(string s) 
    {
        stack<char> st;
        string res;
        int open = 0, close = 0;

        for(int i = 0; i<s.length(); i++)
        {
            if(s[i] == '(') open++;
            else if(s[i] == ')'){
                if(open >= 1) {
                    open--;
                }
                else s[i] = '/';
            }
        }
        
        for(int i = s.length()-1; i>=0; i--)
        {
            if(s[i] == ')') close++;
            else if(s[i] == '('){
                if(close >= 1) {
                    close--;
                }
                else s[i] = '/';
            }
        }

        for(auto it: s){
            if(it != '/') res.push_back(it);
        }

        return res;
    }
};