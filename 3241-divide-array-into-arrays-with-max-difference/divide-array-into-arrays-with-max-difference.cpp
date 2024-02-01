class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<int> temp;
        vector<vector<int>> res;
        int c = 0;
        bool flag = true;

        sort(nums.begin(), nums.end());
        for(auto it : nums)
        {
            if(c == 0) {
                temp.push_back(it);
                c++;
            }
            else if(c == 1)
            {
                if(it - temp[0] <= k) temp.push_back(it);
                else {
                    flag = false;
                    break;
                }
                c++;
            }
            else{ //c ==2
                if(it - temp[1] <= k && it - temp[0] <= k) {
                    temp.push_back(it);
                    res.push_back(temp);
                    temp.clear();
                }
                else {
                    flag = false;
                    break;
                }
                c = 0;
            }
        }

        if(flag) return res;
        else return {};
    }
};