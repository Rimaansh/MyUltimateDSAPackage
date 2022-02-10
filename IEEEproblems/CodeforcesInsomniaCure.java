package com.dsapackage.IEEEproblems;

import java.util.Scanner;

//https://codeforces.com/problemset/problem/148/A
public class CodeforcesInsomniaCure
{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int k, l, m, n, d;
        k = in.nextInt();
        l = in.nextInt();
        m = in.nextInt();
        n = in.nextInt();
        d = in.nextInt();
        boolean[] dragons = new boolean[d];
        kill(dragons, k);
        kill(dragons, l);
        kill(dragons, m);
        kill(dragons, n);

        int alive = 0;
        for(boolean var: dragons)
        {
            if(!var) alive++;
        }

        System.out.println(d - alive);
    }

    static void kill (boolean[] dragons, int n)
    {
        for(int i = n-1; i< dragons.length; i+=n)
        {
            dragons[i] = true;
        }
    }
}
