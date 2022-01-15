package com.dsapackage.Sorting;

import java.util.Arrays;

public class SelectionSort
{
    public static void main(String[] args)
    {
        int[] arr = {1, 6, 3, 12, 1, 54, 64, 21, 2, 0};
        System.out.println(Arrays.toString(arr));
        selectionSort(arr);
        System.out.println(Arrays.toString(arr));
    }

    static void selectionSort(int[] arr)
    {
        for(int i = 0; i < arr.length; i++)
        {
            int last = arr.length - i -1;
            int maxIndex = getMaxIndex(arr, 0 , last);
            swap(arr, maxIndex, last);
        }
    }

    static void swap (int[] arr, int first, int sec)
    {
        int temp = arr[first];
        arr[first] = arr[sec];
        arr[sec] = temp;
    }

    static int getMaxIndex(int[] arr, int start, int end)
    {
        int max = start;
        for(int i = start; i<=end; i++)
        {
            if (arr[max]<arr[i]) max = i;
        }
        return max;
    }
}
