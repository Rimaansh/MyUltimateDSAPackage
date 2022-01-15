package com.dsapackage.Leetcode;

import java.util.Arrays;

public class FirstAndLastPosi34
{
    public static void main(String[] args)
    {
        int[] arr = {5,7,7,8,8,10};
        int target = 8;
        System.out.println(Arrays.toString(searchRange(arr, target)));
    }

    static int[] searchRange(int[] arr, int target)
    {
        int beg = 0, end = arr.length-1, mid=0;
        int ind = -1;
        int ans[] = {-1, -1};

        while(beg<=end)
        {
            mid = beg + (end - beg)/2;

            if(arr[mid]==target)
            {
                ans[0] = mid;
                end = mid -1;
            }
            else if (target>arr[mid]) beg = mid +1;
            else end = mid - 1;
        }

        beg =0;
        end = arr.length-1;
        mid = 0;

        while(beg<=end)
        {
            mid = beg + (end - beg)/2;

            if(arr[mid]==target)
            {
                ans[1] = mid;
                beg = mid+1;
            }
            else if (target>arr[mid]) beg = mid +1;
            else end = mid - 1;
        }

        return ans;
    }
}
