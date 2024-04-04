class Solution {
public:
    int characterReplacement(string s, int k) 
    {
        vector<int> arr(26, 0);
        int l = 0, r = 0, res = 0, maxFreq = 0;
        int n = s.length();

        while(r < n)
        {
            arr[s[r] - 'A']++;
            maxFreq = max(maxFreq, arr[s[r] - 'A']);

            //"if" instead of "while", since there is no point of reducing the maxFreq
            //as the next ans. will always be > the current maxFreq, so just remove 
            //characters one by one
            if((r-l+1) - maxFreq > k) //no. of chars that can be replaced are more than allowed
            {
                arr[s[l] - 'A']--;
                // for(auto it: arr) maxFreq = max(maxFreq, it); 
                //removing the above reduces the time complexity
                l++;
            }
            
            res = max(res, r - l + 1);
            r++;
        }
        return res;
    }
};