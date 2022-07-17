package com.dsapackage.Leetcode;

class FindDuplicate287
{
    public static void main(String[] args)
    {
        int[] nums = {1,3,4,2,2};
        System.out.println(findDuplicate(nums));
    }

    static int findDuplicate(int[] nums)
    {
        int i = 0;
        while(i < nums.length)
        {
            int correctIndex = nums[i] - 1;
            if(nums[i] != nums[correctIndex]) swap(nums, i, correctIndex);
            else i++;
        }

        for(int index = 0; index<nums.length; index++)
        {
            if(nums[index] != index+1) return nums[index];
        }
        return nums.length;
    }

    static void swap (int[] arr, int first, int sec)
    {
        int temp = arr[first];
        arr[first] = arr[sec];
        arr[sec] = temp;
    }

}