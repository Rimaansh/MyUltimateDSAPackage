//NOT RECURSION

package com.dsapackage.Recursion;

public class RotatedBinarySearch {
    public static void main(String[] args) {
        int[] arr = {10, 2, 4, 5, 7, 8, 9};
        int pivot = 0;

        for(int i = 1; i<arr.length-1; i++)
        {
            if(arr[i] > arr[i+1] && arr[i]>arr[i-1]) pivot = i;
        }

        int start = 0;
        int end = arr.length -1;
        int src = 8;

        if(BS(arr, start, pivot, src)) System.out.println("Present");
        else
        {
            if(BS(arr, pivot+1, end, src)) System.out.println("Present");
            else System.out.println("Not Present");
        }

    }

    static boolean BS(int[] arr, int beg, int end, int src)
    {
        while(beg<=end)
        {
            int mid = (beg + end)/2;
            if(arr[mid] == src) return true;
            else if(arr[mid]>src) end = mid - 1;
            else beg = mid + 1;
        }

        return false;
    }
}
