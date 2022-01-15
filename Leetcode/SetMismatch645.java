package com.dsapackage.Leetcode;

import java.util.Arrays;

public class SetMismatch645
{
    public static void main(String[] args)
    {
        int[] nums = {2, 2};
        System.out.println(Arrays.toString(findErrorNums(nums)));
    }

    static int[] findErrorNums(int[] nums)
    {
        int i = 0;
        while(i < nums.length)
        {
            int correctIndex = nums[i] - 1;
            if(nums[i] != nums[correctIndex]) swap(nums, i, correctIndex);
            else i++;
        }

        for(i = 0; i < nums.length; i++)
        {
            if(nums[i] != i+1)
            {
                return new int[] {nums[i], i+1};
            }
        }
        return new int[] {-1, -1};
    }

    static void swap (int[] nums, int first, int sec)
    {
        int temp = nums[first];
        nums[first] = nums[sec];
        nums[sec] = temp;
    }
}
