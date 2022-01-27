package com.dsapackage.Leetcode;

public class ReduceNumToZero1342
{
    public static void main(String[] args) {
        int num = 14;
        System.out.println(reduceToZero(num));
    }

    static int reduceToZero(int n) {
        if(n == 0) return 0;

        if(n%2==0) return 1 + reduceToZero(n/2);
        else return 1 + reduceToZero(n-1);
    }
}
