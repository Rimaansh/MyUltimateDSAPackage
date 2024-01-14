class Solution {
public:
    bool closeStrings(string word1, string word2) 
    {
        if(word1.length() != word2.length())  return false;  

        int n = word1.length();
        vector<int> arr1(27, 0);
        vector<int> arr2(27, 0);

        map<char, int> mpp1, mpp2;

        for(int i = 0; i<n; i++){
            arr1[word1[i] - 'a']++;
            arr2[word2[i] - 'a']++;

            // mpp1[word1[i]]++;
            mpp2[word2[i]]++;
        }

        for(auto it : word1)
        {
            if(mpp2[it] == 0) return false;
        }

        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());

        for(int i = 1; i<=26; i++)
        {
            if(arr1[i] != arr2[i]) return false;
        }

        return true;
    }
};