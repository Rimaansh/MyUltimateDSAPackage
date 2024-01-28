class Solution {
public:
    int subArraySumToTarget(vector<int>& arr, int target) {
        unordered_map<int, int> prefixSumFreq;
        int count = 0;
        int prefixSum = 0;
        
        for (int num : arr) {
            prefixSum += num;
            if (prefixSum == target) 
                count++;
            if (prefixSumFreq.find(prefixSum - target) != prefixSumFreq.end()) 
                count += prefixSumFreq[prefixSum - target];
            prefixSumFreq[prefixSum]++;
        }
        
        return count;
    }

    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int n = matrix[0].size(); // Number of columns
        int m = matrix.size();    // Number of rows
        int result = 0;
        
        for (int left = 0; left < n; left++) {
            vector<int> temp(m, 0);
            for (int right = left; right < n; right++) {
                for (int k = 0; k < m; k++) {
                    temp[k] += matrix[k][right];
                }
                result += subArraySumToTarget(temp, target);
            }
        }
        
        return result;
    }
};