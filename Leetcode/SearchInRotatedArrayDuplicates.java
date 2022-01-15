package com.dsapackage.Leetcode;

public class SearchInRotatedArrayDuplicates
{
    public static void main(String[] args)
    {
        int[] arr = {7,7,0,1,2,2};
        int target = 3;
        System.out.println(findPivot(arr));
    }

    int search(int[] nums, int target)
    {
        int pivot = findPivot(nums);

        if (pivot == -1)
        {
            return(BinarySearch(nums, target, 0, nums.length-1));
        }
        if(nums[pivot]==target) return pivot;

        if(target>=nums[0]) return BinarySearch(nums, target, 0, pivot - 1);

        return BinarySearch(nums, target, pivot+1, nums.length-1);
    }

    static int findPivot(int[] arr)
    {
        int beg = 0;
        int end = arr.length - 1;
        int mid;
        while(beg<=end)
        {
            mid = beg + (end - beg)/2 ;

            if(mid < end && arr[mid]>arr[mid+1]) return mid;

            if(mid > beg && arr[mid] < arr[mid -1]) return mid-1;

            if (arr[beg]>=arr[mid]) end = mid - 1;

            if (arr[beg]<arr[mid]) beg = mid + 1;

            if(arr[mid]==arr[beg] && arr[mid]==arr[end])
            {
                //skip the duplicates
                //NOTE: what if these elements at start and end were the pivot?
                //check if start is pivot
                if (arr[beg]>arr[beg+1]) return beg;
                beg++;
                //check if end is pivot
                if (arr[end]<arr[end-1]) return end -1;
                end--;
            }
        }
        return -1;
    }

    static int BinarySearch(int[] arr, int src, int beg, int end)
    {
        while(beg<=end)
        {
            int mid = beg + (end - beg)/2;
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
