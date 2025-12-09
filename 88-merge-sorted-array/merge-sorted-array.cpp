class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        vector<int> res(m+n);

        int i = 0, j = 0, ind = 0;

        while(i < m && j < n)
        {
            if(nums1[i] < nums2[j])
            {
                res[ind] = nums1[i];
                i++;
            }
            else
            {
                res[ind] = nums2[j];
                j++;
            }

            ind++;
        }

        while(i < m)
        {
            res[ind] = nums1[i];
            i++;
            ind++;
        }

        while(j < n)
        {
            res[ind] = nums2[j];
            j++;
            ind++;
        }

        nums1 = res;
    }
};