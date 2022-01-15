package com.dsapackage.Leetcode;

import java.util.Arrays;

public class ProductOfArrayExceptSelf238
{
    public static void main(String[] args)
    {
        int[] arr = {1, 4, 3, 2};
        System.out.println(Arrays.toString(productExceptSelf(arr)));
    }

    static int[] productExceptSelf(int[] nums)
    {
        int R = 1;
        int[] arr = new int [nums.length];

        arr[0] = 1;

        for(int i = 1; i < nums.length; i++)
            arr[i] = arr[i-1] * nums[i-1];

        for(int i = nums.length - 2; i >= 0; i--)
        {
            R = R * nums[i+1];
            arr[i] = arr[i]*R;
        }

        return arr;
    }
}
