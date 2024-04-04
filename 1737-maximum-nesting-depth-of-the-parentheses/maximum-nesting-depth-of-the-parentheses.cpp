class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int maxC = 0;
        for(auto it: s)
        {
            if(it == '(') {
                st.push('(');
                maxC = max(maxC, (int)st.size());
            }
            else if(it == ')') {
                if(!st.empty()) {
                    st.pop();
                }
            }
        }

        return maxC;
    }
};
