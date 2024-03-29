class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1 && trust.size() == 0) return 1;
        vector<int> count(n+1, 0);
        for(int i = 0; i < trust.size(); i++){
            count[trust[i][0]]--;
            count[trust[i][1]]++;
        }

        for(int i = 0; i < count.size(); i++){
            if(count[i] == n-1) return i;
        }
        return -1;
    }
};
