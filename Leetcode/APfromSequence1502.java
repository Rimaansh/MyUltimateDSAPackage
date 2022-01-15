package com.dsapackage.Leetcode;

import java.util.Arrays;

public class APfromSequence1502
{
    public static void main(String[] args)
    {
        int[] arr = {24, 48, 2};
        System.out.println(canMakeArithmeticProgression(arr));
    }

    static boolean canMakeArithmeticProgression(int[] arr)
    {
        boolean flag = true;

        if(arr.length == 2) return flag;
        else
        {
            Arrays.sort(arr);
            int d = Math.abs(arr[0]-arr[1]);
            for(int i = 1; i<arr.length - 1; i++)
            {
                if(Math.abs(arr[i]-arr[i+1]) != d)
                {
                    flag = false;
                    break;
                }
            }
        }
        return flag;
    }
}
