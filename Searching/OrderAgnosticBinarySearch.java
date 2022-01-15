package com.dsapackage.Searching;

public class OrderAgnosticBinarySearch
{
    public static void main(String[] args)
    {
        int[] arr = {1, 4, 5, 46, 50, 77, 88};
        int[] arr2 = {65, 54, 43, 32, 21, 1};
        System.out.println(OrderAgnosticBS(arr, 50));
        System.out.println(OrderAgnosticBS(arr2, 54));
    }

    static int OrderAgnosticBS (int arr[], int src)
    {
        int beg=0;
        int mid, i;
        int end = arr.length - 1;

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
