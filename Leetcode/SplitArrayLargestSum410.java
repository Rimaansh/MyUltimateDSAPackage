package com.dsapackage.Leetcode;

public class SplitArrayLargestSum410
{
    public static void main(String[] args)
    {
        int[] pages = {12, 34, 67, 90};
        int m = 2;
        System.out.println(splitArray(pages, m));
    }

    static int splitArray(int[] nums, int m)
    {
        int start = 0;
        int end = 0;
        for(int i =0; i < nums.length; i++)
        {
            start = Math.max(start, nums[i]);
            end += nums[i];
        }

        while (start < end)
        {
            int mid = start + (end - start)/2;

            int sum = 0;
            int pieces = 1;
            for(int num : nums)
            {
                if(sum + num > mid){
                    pieces++;
                    sum = num;
                } else {
                    sum += num;
                }
            }

            if(pieces>m) start = mid +1;
            else end = mid;
        }
        return end;
    }
}