class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) 
    {
        unordered_map<char, int> mpp;
        vector<int> res;

        for(int it : digits){
            mpp[char(it + '0')]++;
        }

        for(int i = 100; i <= 999; i+=2)
        {
            string num = to_string(i);
            // cout<<num<<endl;
            mpp[num[0]]--;
            mpp[num[1]]--;
            mpp[num[2]]--;

            if(mpp[num[0]] >= 0 && mpp[num[1]] >= 0 && mpp[num[2]] >= 0){
                res.push_back(i);
            }


            mpp[num[0]]++;
            mpp[num[1]]++;
            mpp[num[2]]++;
        }

        return res;
    }
};