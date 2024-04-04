class Solution {
public:
    int characterReplacement(string s, int k) {
    unordered_map<char, int> mpp;
    int l = 0, res = 0, maxFreq = 0;

    for (int r = 0; r < s.length(); ++r) {
        mpp[s[r]]++;
        maxFreq = max(maxFreq, mpp[s[r]]); // Update max frequency

        // Check if the window size exceeds k replacements
        if (r - l + 1 - maxFreq > k) {
            mpp[s[l]]--; // Shrink the window from the left
            l++;
        }

        res = max(res, r - l + 1);
    }

    return res;
}
};