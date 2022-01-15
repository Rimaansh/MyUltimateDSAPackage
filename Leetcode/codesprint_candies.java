package com.dsapackage.Leetcode;

import java.util.Scanner;

public class codesprint_candies
{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];
        int i, days = 0, candyThatDay = 1;
        for(i = 0; i<n; i++)
        {
            arr[i] = in.nextInt();

        }
        i = 0;
        while(n!=0)
        {
            if(candyThatDay<=arr[i])
            {
                days++;
                i++;
            }
            else
            {
                i++;
                arr[i+1] = arr[i+1]+arr[i];
            }
            n--;
            candyThatDay++;
        }
        System.out.println(days);
    }
}
