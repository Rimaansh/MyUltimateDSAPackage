package com.dsapackage.Sorting;

import java.util.Arrays;

public class CyclicSort
{
    public static void main(String[] args)
    {
        int[] arr = {3, 5, 4, 2, 1};

        System.out.println(Arrays.toString(arr));
        cyclicSort(arr, arr.length);
        System.out.println(Arrays.toString(arr));
    }

    static void cyclicSort(int[] arr, int length)
    {
        int i = 0;
        while(i<length)
        {
            int correctIndex = arr[i] - 1;
            // I'm checking if i = to the correct index; 0 == (3-1); which is not so swap elements at i & (3-1)
            if(arr[i] != arr[correctIndex]) swap(arr, i, arr[i]-1); //arr[i]-1 is the correct index with which we are checking
            else i++;
        }
    }

    static void swap (int[] arr, int first, int sec)
    {
        int temp = arr[first];
        arr[first] = arr[sec];
        arr[sec] = temp;
    }
}
