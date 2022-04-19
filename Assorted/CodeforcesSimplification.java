package com.dsapackage.Assorted;

import java.util.Scanner;

public class CodeforcesSimplification
{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n, m;
        n = in.nextInt();
        m = in.nextInt();
        int N = (int) Math.pow(2,n);
        System.out.println(m%N);
    }
}
