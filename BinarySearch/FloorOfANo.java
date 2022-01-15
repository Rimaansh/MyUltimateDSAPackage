package com.dsapackage.BinarySearch;

public class FloorOfANo
{
    public static void main(String[] args)
    {
        int[] arr = {2, 3, 5, 9, 14, 16, 18};
        System.out.println(floor(arr,15));
    }

    static int floor(int[] arr, int src)
    {
        int beg=0;
        int mid, i;
        int end = arr.length - 1;

        if (src < arr[0]) return -999999;

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
        return arr[end];
    }
}
