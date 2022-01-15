package com.dsapackage.Recursion;

import java.util.Arrays;

public class BubbleSort
{
    public static void main(String[] args)
    {
        int[] arr = {4, 5, 3, 2, 1};
        int row = arr.length-1;
        int pointer = 0;
        System.out.println(Arrays.toString(arr));
        sort(arr, row, pointer);
        System.out.println(Arrays.toString(arr));
    }

    static void sort(int[] arr, int row, int pointer)
    {
        if(row==0) return;

        if(pointer < row)
        {
            if(arr[row]<arr[pointer]) swap(arr, row, pointer);
            sort(arr, row, pointer + 1);
        }
        sort(arr, row-1, 0);
    }

    static void swap(int[] arr, int m, int n)
    {
        int temp = arr[m];
        arr[m] = arr[n];
        arr[n] = temp;
    }
}
