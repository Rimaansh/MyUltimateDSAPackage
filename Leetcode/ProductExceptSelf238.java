package com.dsapackage.Leetcode;

import java.lang.reflect.Array;
import java.util.Arrays;

public class ProductExceptSelf238
{
    public static void main(String[] args)
    {
        int[] num = {};
        int[] arr = productExceptSelf(num);
        System.out.println(Arrays.toString(arr));
    }

    static int[] productExceptSelf(int[] num)
    {
        int p = 1;
        int[] arr = new int [num.length];

        for(int i = 0; i< num.length; i++)
        {
            p = 1;

            for(int j = 0; j< num.length; j++)
            {
                if(i!=j) p*=num[j];
            }
            arr[i] = p;
        }

        return arr;
    }
}
