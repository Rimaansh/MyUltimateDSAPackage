package com.dsapackage.Leetcode;

public class GFGCountTheZeroes
{
    public static void main(String[] args) {

    }

    static int countZeroes(int[] arr, int n)
    {
        int beg = 0;
        int end = n-1;

        if(arr[beg] == 0 && arr[end] == 0) return n;

        if(arr[beg] == 1 && arr[end] == 1) return 0;

        while(beg<=end)
        {
            int mid= (beg+end)/2;

            if(arr[mid]==1 && arr[mid+1]==0) return(n-1-mid);

            else if(arr[mid]==0 && arr[mid-1]==1) return(n-mid);

            else if(arr[mid]==1 && arr[mid+1]!=0) beg = mid+1;

            else if(arr[mid]==0 && arr[mid-1]!=1) end = mid-1;
        }

        return n;
    }
}
