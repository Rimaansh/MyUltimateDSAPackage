package com.dsapackage.Recursion;

import java.util.Scanner;

public class CountZeroes
{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int num = in.nextInt();
        System.out.println(countZeroes(num));
    }

    static int countZeroes(int n) {
        if(n == 0) return 1;

        if(n<10) return 0;

        int d = n%10;
        if(d == 0) return 1 + countZeroes(n/10);
        else return countZeroes(n/10);
    }
}
