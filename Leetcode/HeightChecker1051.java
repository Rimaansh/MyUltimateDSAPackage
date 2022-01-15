package com.dsapackage.Leetcode;

import java.util.Arrays;

public class HeightChecker1051
{
    public static void main(String[] args)
    {
        int[] arr = {5,1,2,3,4};
        System.out.println(heightChecker(arr));
    }

    static int heightChecker(int[] heights)
    {
        int[] arr = new int [heights.length];
        int i, count = 0;
        for(i = 0; i<heights.length; i++)
        {
            arr[i] = heights[i];
        }

        Arrays.sort(arr);

        for(i = 0; i<heights.length; i++)
        {
            if(arr[i]!=heights[i]) count++;
        }

        return count;
    }
}
