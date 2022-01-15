package com.dsapackage.Leetcode;

import java.util.Arrays;

public class TwoSum1
{
    static int[] twoSum(int[] nums, int target)
    {
        int[] index = new int[2];
        int i;
        for(i = 0; i<nums.length; i++) {
            int compliment = target - nums[i];
            int j = search(nums, compliment, i);
            if (j == -1) {
                continue;
            } else {
                index[0] = i;
                index[1] = j;
                return index;
            }
        }
        return index;
    }

     static int search(int[] arr, int compliment, int current)
     {
         for(int i = 0; i<arr.length; i++)
         {
             if(arr[i]==compliment && i!=current)
             {
                 return i;
             }
         }
         return -1;
     }

    public static void main(String[] args)
    {
        int[] nums = {3,2,4};
        int target = 6;
        System.out.println(Arrays.toString(twoSum(nums, target)));
    }
}
