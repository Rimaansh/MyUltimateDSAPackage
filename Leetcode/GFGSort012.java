package com.dsapackage.Leetcode;

import java.util.Arrays;

public class GFGSort012
{
    public static void main(String[] args)
    {
        int[] a = {2, 1, 0, 0, 2, 1};
        System.out.println(Arrays.toString(a));
        sort012(a, a.length);
        System.out.println(Arrays.toString(a));
    }

    static void sort012(int[] a, int n)
    {
        int c0 = 0, c1 = 0, c2 = 0;

        for(int i = 0; i < n; i++)
        {
            if(a[i] == 0) c0++;
        }

        for(int i = 0; i < n; i++)
        {
            if(a[i] == 1) c1++;
        }

        for(int i = 0; i < n; i++)
        {
            if(a[i] == 2) c2++;
        }

        int c = 0;

        while(c0>0)
        {
            a[c++] = 0;
            c0--;
        }

        while(c1>0)
        {
            a[c++] = 1;
            c1--;
        }

        while(c2>0)
        {
            a[c++] = 2;
            c2--;
        }
    }
}
