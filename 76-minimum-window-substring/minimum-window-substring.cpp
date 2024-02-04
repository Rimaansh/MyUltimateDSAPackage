class Solution {
public:
    string minWindow(string s, string t) {
     int i = 0 , j = 0 , ans = INT_MAX;
	int idx = -1;
	// Create a map to store the frequency of characters
	unordered_map<char , int> mp;
	// Fill the map with character frequency
	for (auto x : t) mp[x]++;

	int count = mp.size();
	//Start the sliding
	while (j < s.length()) {

		if (mp.count(s[j])>0) {
			mp[s[j]]--;
			if (mp[s[j]] == 0) count--;
		}

		while (count == 0) {
			
			if (ans > j - i + 1) {
				ans =  j - i + 1;
				idx = i;
			}

			if (mp.count(s[i])>0) {

				if (mp[s[i]] == 0) {
					count++;
				}
				mp[s[i]]++;
			}
			i++;
		}

		j++;
	}

        
     return (idx==-1) ? "" : s.substr(idx, ans)  ;    
    }
};