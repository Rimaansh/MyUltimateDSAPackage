class Solution {
public:
    bool checkValidString(string s) {
        stack<int> asterisk;
        stack<int> validPar;
        
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(') validPar.push(i);
            if(s[i] == '*') asterisk.push(i);
            if(s[i] == ')'){
                if(!validPar.empty()) 
                    validPar.pop();
                else if(!asterisk.empty()) 
                    asterisk.pop();
                else 
                    return false;
            }
        }
        
        while(!validPar.empty() && !asterisk.empty())
        {
            if(validPar.top() > asterisk.top()) return false;
            validPar.pop(); 
            asterisk.pop();
        }
        
        return validPar.empty();
    }
};