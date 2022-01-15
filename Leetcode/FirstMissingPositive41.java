package com.dsapackage.Leetcode;

public class FirstMissingPositive41
{
    public static void main(String[] args)
    {
        int[] nums = {2};
        System.out.println(firstMissingPositive(nums));
    }

    static int firstMissingPositive(int[] nums)
    {
        int i = 0;
        while(i < nums.length)
        {
            if(nums[i]>0)
            {
                int correctIndex = nums[i] - 1;
                if(nums[i] < nums.length && nums[i] != nums[correctIndex]) swap(nums, i, correctIndex);
                else i++;
            }
            else i++;
        }

        for(int index = 0; index<nums.length; index++)
        {
            if(nums[index] != index + 1) return index + 1;
        }
        return nums.length + 1;
    }

    static void swap (int[] nums, int first, int sec)
    {
        int temp = nums[first];
        nums[first] = nums[sec];
        nums[sec] = temp;
    }
}
