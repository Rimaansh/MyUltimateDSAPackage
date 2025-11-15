class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> st;

        for(char it: s)
        {
            if(it == '(' || it == '{' || it == '['){
                st.push(it);
            }
            else 
            {
                if(st.empty()) return false;

                char popped = st.top();
                st.pop();

                if(it == ')' && popped != '(') return false;
                if(it == '}' && popped != '{') return false;
                if(it == ']' && popped != '[') return false;
            }
        }   
        
        return st.empty(); 
    }
};
