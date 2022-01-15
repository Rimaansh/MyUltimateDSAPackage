package com.dsapackage.Sorting;

import java.util.Arrays;

public class InsertionSort
{
    public static void main(String[] args)
    {
        int[] arr = {6, 3, 12, 1, 15, 2, 0};

        System.out.println(Arrays.toString(arr));
        insertionSort(arr, arr.length);
        System.out.println(Arrays.toString(arr));
    }

    static void insertionSort(int[] arr, int n)
    {
        for(int i = 0; i < n - 1; i++) // or, i <= n-2
        {
            for(int j = i+1; j > 0; j--)
            {
                if(arr[j]<arr[j-1]) swap(arr, j, j-1);
                else break;
            }
        }
    }

    static void swap(int[] arr, int first, int sec)
    {
        int temp = arr[first];
        arr[first] = arr[sec];
        arr[sec] = temp;
    }
}
