class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto it : words)
        {
            int l = 0, r = it.size()-1;
            bool flag = true;
            while(l < r)
            {
                if(it[l++] != it[r--]){
                    flag = false;
                    break;
                }
            }
            if(flag) return it;
        }
        return "";
    }
};