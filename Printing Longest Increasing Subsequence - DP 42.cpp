vector<int> printingLongestIncreasingSubsequence(vector<int> arr, int n) 
{
	vector<int> dp(n, 1), hash(n);
	int maxi, lastIndex = 0;

	for(int i = 0; i < n; i++) hash[i] = i;

	for(int ind = 0; ind<n; ind++)
	{
		for(int prevInd = 0; prevInd < ind; prevInd++)
		{
			if(arr[prevInd] < arr[ind] && (dp[prevInd] + 1) > dp[ind]){
				dp[ind] = dp[prevInd]+ 1;
				hash[ind] = prevInd;
			}
		}

		if(dp[ind] > maxi){
			maxi = dp[ind];
			lastIndex = ind;
		}
	}	

	vector<int> lis;
	lis.push_back(arr[lastIndex]);
	while(hash[lastIndex] != lastIndex){
		lastIndex = hash[lastIndex];
		lis.push_back(arr[lastIndex]);
	}

	reverse(lis.begin(), lis.end());

	return lis;
}
