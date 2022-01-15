package com.dsapackage.Searching;

public class BinarySearch
{
    public static void main(String[] args) {
        int[] arr = { 1, 4, 5, 46, 50, 77, 88};
        System.out.println(BinarySearch(arr, 50));
        System.out.println(BinarySearch2(arr, 50));
    }

    static boolean BinarySearch (int arr[], int src)
    {
        int beg=0;
        int mid, i;
        int end = arr.length - 1;

        while(beg<=end)
        {
            mid = (beg + end) / 2;
            if(src>arr[mid])
            {
                beg = mid + 1;
            }
            else if(src<arr[mid])
            {
                end = mid -1;
            }
            else return true;
        }
        return false;
    }

    static int BinarySearch2 (int arr[], int src)
    {
        int beg=0;
        int mid;
        int end = arr.length - 1;

        while(beg<=end)
        {
            mid = beg + (end - beg)/2;
            // mid = (beg + end) / 2; [both are right] using the above formula for mid because if the values of beg & end are too big, they might exceed "int" limit
            if(src>arr[mid])
            {
                beg = mid + 1;
            }
            else if(src<arr[mid])
            {
                end = mid -1;
            }
            else return mid;
        }
        return -1;
    }
}
