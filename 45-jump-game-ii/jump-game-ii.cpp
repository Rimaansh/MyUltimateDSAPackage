class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return 0;
        int maxPos = nums[0], maxSteps = nums[0];
        int jumps = 1;
        for (int i = 1; i < n; i++) {
            if (maxSteps < i) {
                ++jumps;
                maxSteps = maxPos;
            }
            maxPos = max(maxPos, nums[i] + i);
        }
        return jumps;
    }
};
