package com.dsapackage.ArrayAndArrayLists;

import java.util.Arrays;

public class ReverseUsingSwap
{
    public static void main(String[] args)
    {
        int[] arr = {432, 34, 345, 43, 22};
        System.out.println(Arrays.toString(arr));

        reverse(arr);

        System.out.println(Arrays.toString(arr));
    }

    static void reverse(int[] arr)
    {
        for (int i = 0; i < arr.length/2; i++){
            swap(arr, i, (arr.length - i -1));
        }
    }

    static void swap(int arr[], int ind1, int ind2)
    {
        int temp;
        temp = arr[ind1];
        arr[ind1] = arr[ind2];
        arr[ind2] = temp;
    }
}
