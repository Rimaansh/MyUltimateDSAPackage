package com.dsapackage.Recursion;

import java.util.Arrays;

public class SelectionSort
{
    public static void main(String[] args)
    {
        int[] arr = {4, 5, 3, 2, 1};
        System.out.println(Arrays.toString(arr));
        //sort(arr, arr.length-1, 0, 0);
        System.out.println(Arrays.toString(arr));
    }

//    static void sort(int[] arr, int row, int col, int maxInd)
//    {
//        if(row == 0) return;
//
//        if(col < row)
//        {
//            if(arr[col]>arr[maxInd]) sort(arr, row, col+1, col);
//            else sort(arr, row, col+1, maxInd);
//        }
//        else
//
//    }

    static void swap(int[] arr, int m, int n)
    {
        int temp = arr[m];
        arr[m] = arr[n];
        arr[n] = temp;
    }
}
