package com.dsapackage.BinarySearch;

public class CeilingOfTarget
{
    public static void main(String[] args)
    {
        int[] arr = {2, 3, 5, 9, 14, 16, 18};
        System.out.println(ceiling(arr,19));
    }

    static int ceiling(int[] arr, int src)
    {
        int beg=0;
        int mid, i;
        int end = arr.length - 1;

        if (src > arr[arr.length-1]) return -999999;

        while(beg<=end)
        {
            mid = beg + (end - beg)/2;

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
        return arr[beg];
    }
}

    /* THIS WAS MY CODE
    static int ceiling(int[] arr, int src)
    {
        int beg = 0, end = arr.length -1;
        int mid = 0;
        if(src > arr[arr.length-1]) return -999999;
        else
        {
            while(beg<=end)
            {
                mid = beg + (end - beg) / 2;

                if (beg == end && src>arr[mid]) return arr[mid+1];
                else if (beg == end) return arr[mid];
                else if (src < arr[mid]) end = mid - 1;
                else if (src > arr[mid]) beg = mid + 1;
                else return arr[mid];
            }
                return -999999;
        }
    }
    */

