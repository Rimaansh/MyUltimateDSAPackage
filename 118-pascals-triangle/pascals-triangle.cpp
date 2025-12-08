class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for (int n = 1; n <= numRows; n++) {
            vector<int> tempList;
            int res = 1;
            tempList.push_back(res);

            for (int row = 1; row < n; row++) {
                res = res * (n - row);
                res = res / (row);
                tempList.push_back(res);
            }

            ans.push_back(tempList);
        }
        return ans;
    }
};