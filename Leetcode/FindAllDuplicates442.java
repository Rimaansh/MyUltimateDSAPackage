package com.dsapackage.Leetcode;

import java.util.ArrayList;
import java.util.List;

public class FindAllDuplicates442
{
    public static void main(String[] args)
    {
        int[] nums = {1,3,4,2,2};
        System.out.println(findDuplicates(nums).toString());
    }

    static List<Integer> findDuplicates(int[] nums)
    {
        List<Integer> list = new ArrayList<>();

        int i = 0;
        while(i < nums.length)
        {
            int correctIndex = nums[i] - 1;
            if(nums[i] != nums[correctIndex]) swap(nums, i, correctIndex);
            else i++;
        }

        for(int index = 0; index<nums.length; index++)
        {
            if(nums[index] != index+1) list.add(nums[index]);
        }
        return list;
    }

    static void swap (int[] arr, int first, int sec)
    {
        int temp = arr[first];
        arr[first] = arr[sec];
        arr[sec] = temp;
    }
}
