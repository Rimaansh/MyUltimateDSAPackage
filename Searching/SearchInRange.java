package com.dsapackage.Searching;

import java.util.Scanner;

public class SearchInRange {
    public static void main(String[] args) {
        Scanner in = new Scanner (System.in);
        int[] arr = {324, 234, 2, 34, 5, 23, 4, 24, 4, 432, 4};
        int src = 5;
        System.out.println(search(arr, src, 0, 3));
    }

    static int search (int arr[], int src, int start, int end)
    {
        if(start > end) return -1;

        for(int i = start; i<=end; i++){
            if(arr[i]==src) return i;
        }
        return -1;
    }
}
