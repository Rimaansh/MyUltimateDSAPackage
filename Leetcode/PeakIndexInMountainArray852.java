package com.dsapackage.Leetcode;

public class PeakIndexInMountainArray852
{
    public static void main(String[] args) {
        int arr[] = {3, 4, 5, 6, 7, 2, 1, 0};
        System.out.println(peakIndexInMountainArray(arr));
    }

    static int peakIndexInMountainArray(int[] arr)
    {
        int beg = 0;
        int end = arr.length - 1;

        while(beg<end)
        {
            int mid = (beg + end) / 2;
            if(arr[mid]>arr[mid+1]) end = mid;
            else if(arr[mid]<arr[mid+1]) beg = mid+1;
        }

        return beg; // or return end ; BOTH ARE SAME
    }
}
