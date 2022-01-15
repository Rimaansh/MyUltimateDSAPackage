package com.dsapackage.Recursion;

import java.util.Arrays;

public class MergeSort
{
    public static void main(String[] args)
    {
        int[] arr = {4, 8, 3, 1, 9, 10};

        inPlaceMergeSort(arr, 0, arr.length);

        System.out.println(Arrays.toString(arr));
    }

    static int[] mergeSort(int[] arr)
    {
        if(arr.length == 1) return arr;

        int mid = arr.length/2;

        int[] left = mergeSort(Arrays.copyOfRange(arr,0, mid));
        int[] right = mergeSort(Arrays.copyOfRange(arr, mid, arr.length));

        return merge(left, right);
    }

    static void inPlaceMergeSort(int[] arr, int start, int end) //incorrect
    {
        if(end - start == 1) return;

        int mid = (start + end)/2;

        inPlaceMergeSort(arr,0, mid);
        inPlaceMergeSort(arr, mid, end);

        merge(arr, start, mid, end);
    }

    static void merge(int[] arr, int start, int mid, int end) //incorrect
    {
        int[] mix = new int[end - start];

        int k = 0;
        int pointer1 = start;
        int pointer2 = mid;

        while((pointer1 < mid) && (pointer2 < end))
        {
            if(arr[pointer1] < arr[pointer2]) mix[k++] = arr[pointer1++];
            else mix[k++] = arr[pointer2++];
        }

        while(pointer1 < mid) arr[k++] = arr[pointer1++];

        while(pointer2 < end) arr[k++] = arr[pointer2++];

        for (int i = 0; i < mix.length; i++) {
            arr[start + i] = mix[i];
        }
    }

    static int[] merge(int[] first, int[] second)
    {
        int[] merged = new int[first.length + second.length];

        int k = 0;
        int pointer1 = 0;
        int pointer2 = 0;

        while((pointer1 < first.length) && (pointer2 < second.length))
        {
            if(first[pointer1] < second[pointer2]) merged[k++] = first[pointer1++];
            else merged[k++] = second[pointer2++];
        }

        while(pointer1 < first.length) merged[k++] = first[pointer1++];

        while(pointer2 < second.length) merged[k++] = second[pointer2++];

        return merged;
    }
}
