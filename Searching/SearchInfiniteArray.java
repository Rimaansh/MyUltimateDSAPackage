package com.dsapackage.Searching;

public class SearchInfiniteArray
{
    public static void main(String[] args)
    {
        int[] arr = {1, 3, 5, 6, 7, 8, 9};
        System.out.println(findRange(arr,5));
    }

    static int findRange(int[] arr, int src){
        //finding the range
        int start = 0;
        int end = 1;
        //condition for the search element to lie in the range

        if(src>arr[end]){
            int tempStart = end + 1;
            end = (end - start + 1) * 2;
            start = tempStart;
        }
        return BinarySearch(arr, src, start, end);
    }

    static int BinarySearch (int[] arr, int src, int beg, int end)
    {
        int mid;

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
        return -1;
    }
}
