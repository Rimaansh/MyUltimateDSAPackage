package com.dsapackage.Leetcode;

import java.util.Scanner;

public class codesprint_dyutishloveswebsites
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int n, t;
        n = in.nextInt();
        t = in.nextInt();
        int[] time = new int[n];
        for (int i = 0; i < n; i++) {
            time[i] = in.nextInt();
        }
        int days = 0;

        for (int i = 0; t>0; i++) {
            t = t - (86400-time[i]);
            days++;
        }
        System.out.println(days);
    }
}
