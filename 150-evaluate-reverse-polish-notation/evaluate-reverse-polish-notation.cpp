class Solution {
public:
    int evalRPN(vector<string>& tokens) 
    {   
        stack<int> st;
        int res = 0;
        for(auto it : tokens)
        {
            if(it.length() == 1 && (it[0] == '+' || it[0] == '-' || it[0] == '*' || it[0] == '/'))
            {
                int b = st.top();
                st.pop();

                int a = st.top();
                st.pop();

                int res;
                if(it[0] == '+'){
                    res = a + b;
                }
                else if(it[0] == '-'){
                    res = a - b;
                }
                else if(it[0] == '*'){
                    res = a * b;
                }
                else if(it[0] == '/'){
                    res = a / b;
                }

                st.push(res);
            }
            else
            {
                st.push(stoi(it));    
            }
        }

        return st.top();
    }
};