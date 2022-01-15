package com.dsapackage.Leetcode;

import java.util.Arrays;

public class ContainsDuplicate217
{
    public static void main(String[] args)
    {
        int[] arr = {1, 2, 3, 1};
        System.out.println(containsDuplicate(arr));
    }

    static boolean containsDuplicate(int[] nums)
    {
        Arrays.sort(nums);
        for(int i =0; i<nums.length -1; i++)
        {
            if(nums[i] == nums [i+1]) return true;
        }
        return false;
    }

    static boolean containsDuplicate2(int[] nums)
    {
        // O(n^2) time complexity
        for(int i = 0; i < nums.length; i++)
        {
            for(int j = i+1; j <= nums.length - 1; j++)
            {
                if(nums[i] == nums[j]) return true;
            }
        }
        return false;
    }
}
