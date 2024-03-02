class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int neg = 0, pos;
        int n = nums.size();
        for(int i = 0;i<n; i++){
            if(nums[i]>=0) {
                pos = i;
                break;
            }
        }
        vector<int> res;
        neg = pos - 1;
        while(neg > -1 && pos < n)
        {
            int a = nums[neg]*nums[neg];
            int b = nums[pos]*nums[pos];
            if(a < b) {
                res.push_back(a);
                neg--;
            }
            else {
                res.push_back(b);
                pos++;
            }
        }

        while(neg > -1)
        {
            int a = nums[neg]*nums[neg];
            res.push_back(a);
            neg--;
        }

        while(pos < n)
        {
            int b = nums[pos]*nums[pos];
            res.push_back(b);
            pos++;
        }

        return res;
    }
};