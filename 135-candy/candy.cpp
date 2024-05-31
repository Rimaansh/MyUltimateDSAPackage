class Solution {
public:
    int candy(vector<int>& ratings) 
    {
        int n = ratings.size();
        int i = 1, peak, down, candies = 1;
        
        while(i < n)
        {
            //if we have a flat land
            if(ratings[i] == ratings[i-1]){
                candies += 1;
                i++;
                continue;
            }

            //assume we have a rising land [UPHILL]
            peak = 1;
            while(i < n && ratings[i] > ratings[i-1]){
                peak++;
                candies += peak;
                i++;
            }

            //assume we have a dipping land [DOWNHILL]
            down = 1;
            while(i < n && ratings[i] < ratings[i-1]){
                candies += down;
                i++;
                down++;
            }

            if(down > peak) candies += (down - peak);
        }

        return candies;
    }
};