package com.dsapackage.Leetcode;

public class FindInMountainArray1095
{
    public static void main(String[] args) {
        int[] arr = {3, 4, 5, 6, 7, 5, 4, 2, 1, 0};
        System.out.println(peakIndexInMountainArray(arr));
    }

    static int search(int[] arr, int src)
    {
        int peak = peakIndexInMountainArray(arr);
        int res1 = OrderAgnosticBS(arr, src, 0, peak);
        if(res1 == -1)
        {
            int res2;
            if(arr.length==1) res2 = -1;
            else res2 = OrderAgnosticBS(arr, src, peak+1, arr.length-1);
            return res2;
        }
        return res1;
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

    static int OrderAgnosticBS(int[] arr, int src, int beg, int end)
    {
        int mid;
        boolean isAsc = arr[beg] < arr[end];

        while(beg<=end)
        {
            mid = beg + (end - beg)/2;

            if(src == arr[mid]) return mid;

            if (isAsc)
            {
                if (src<arr[mid]) end = mid -1;
                else beg = mid +1;
            }
            else
            {
                if(src<arr[mid]) beg = mid +1;
                else  end = mid -1;
            }
        }
        return -1;
    }
}
