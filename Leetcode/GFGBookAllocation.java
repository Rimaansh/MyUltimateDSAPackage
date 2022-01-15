package com.dsapackage.Leetcode;

public class GFGBookAllocation
{
    //Google Question ('_')
    public static void main(String[] args)
    {
        int[] pages = {12, 34, 67, 90};
        int m = 2;
        System.out.println(allocate(pages, m));
    }

    static int allocate (int[] pages, int m)
    {
        int low = pages[pages.length - 1];
        int high = sum(pages);

        while(low < high)
        {
            int mid = (low + high) / 2;
            int pieces = 1;
            int sum = 0;

            for(int ele : pages)
            {
                if(sum + ele > mid)
                {
                    sum = ele;
                    pieces++;
                }
                else sum += ele;
            }

            if(pieces>m) low = mid + 1;
            else high = mid;
        }
        return high;
    }

     static int sum(int[] pages)
     {
         int s = 0;
         for(int ele : pages) s += ele;
         return s;
     }
}
