package com.dsapackage.Recursion;

public class BinarySearch
{
    public static void main(String[] args)
    {
        int[] arr = {1, 2, 3, 4, 5, 6};
        System.out.println(BS(arr, 0, arr.length -1, 3));
    }

    static int BS(int[] arr, int beg, int end, int src)
    {
        if (beg > end) return -1;

        int mid = (beg + end) / 2;

        if(arr[mid]==src) return mid;
        else if(arr[mid]>src) return BS(arr, mid + 1, end, src);
        else return BS(arr, beg, mid - 1, src);
    }
}
