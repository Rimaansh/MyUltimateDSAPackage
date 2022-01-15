package com.dsapackage.Leetcode;

public class MissingNumber268
{
    public static void main(String[] args) {
        int[] arr = {3,0,1};
        System.out.println(missingNumber2(arr));
    }

    static int missingNumber(int[] nums) {
        int n = nums.length;
        int s = (n * (n+1)) / 2;

        for(int i = 0; i < n; i++)
        {
            s-= nums[i];
        }
        return s;
    }

    static int missingNumber2(int[] nums)
    {
        //cyclicSort approach
        int i = 0;
        while(i<nums.length)
        {
            int correctIndex = nums[i];
            if(nums[i]!=nums.length && i!=correctIndex) swap(nums, i, correctIndex);
            else i++;
        }

        for(i = 0; i<nums.length; i++)
        {
            if(nums[i]!=i) return i;
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
