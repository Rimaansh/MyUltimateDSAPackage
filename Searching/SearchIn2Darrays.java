package com.dsapackage.Searching;

import java.util.Arrays;
import java.util.Scanner;

public class SearchIn2Darrays
{
    public static void main(String[] args) {
        Scanner in = new Scanner (System.in);
        int[][] arr = {
                {23, 4, 42},
                {3423, 342,43, 234},
                {12 , 23, 543, 32, 534}
        };
        System.out.println(search(arr, 7696896));
        
        System.out.println(Arrays.toString(search2(arr, 32)));
    }

    static String search (int arr[][], int src){
            for (int i =0; i<arr.length; i++)
            {
                for(int j = 0; j< arr[i].length; j++)
                {
                    if (arr[i][j] == src) return ( i+","+j);
                }
            }
            return ("-1");
    }

    static int[] search2 (int arr[][], int src){
        for (int i =0; i<arr.length; i++)
        {
            for(int j = 0; j< arr[i].length; j++)
            {
                if (arr[i][j] == src) return new int[] {i,j};
            }
        }
        return new int[] {-1};
    }
}
