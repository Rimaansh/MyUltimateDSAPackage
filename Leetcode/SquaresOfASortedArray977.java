package com.dsapackage.Leetcode;

import java.util.Arrays;

public class SquaresOfASortedArray977
{
    public static void main(String[] args) {
        int[] nums = {-4,-1,0,3,10};
        System.out.println(Arrays.toString(sortedSquares(nums)));
    }

    static int[] sortedSquares(int[] nums)
    {
        int[] sorted_squares = new int [nums.length];

        int neg_pointer = lastNeg(nums);
        int pos_pointer = neg_pointer+1;

        int counter = 0;

        while(neg_pointer>=0 && pos_pointer<nums.length)
        {
            if(nums[neg_pointer]* nums[neg_pointer] < nums[pos_pointer] * nums[pos_pointer])
            {
                sorted_squares[counter++] =  nums[neg_pointer]* nums[neg_pointer];
                neg_pointer--;
            } else {
                sorted_squares[counter++] = nums[pos_pointer] * nums[pos_pointer];
                pos_pointer++;
            }
        }

        while(neg_pointer>=0)
        {
            sorted_squares[counter++] =  nums[neg_pointer]* nums[neg_pointer];
            neg_pointer--;
        }

        while(pos_pointer<nums.length)
        {
            sorted_squares[counter++] = nums[pos_pointer] * nums[pos_pointer];
            pos_pointer++;
        }

        return (sorted_squares);
    }

    static int lastNeg(int[] arr)
    {
        for(int i = arr.length - 1; i>=0; i--)
        {
            if(arr[i]<0) return i;
        }
        return -1;
    }
}
