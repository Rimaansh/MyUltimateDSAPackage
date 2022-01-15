package com.dsapackage.Leetcode;

public class ReduceToZero1342
{
    public static void main(String[] args)
    {
        System.out.println(numberOfSteps(8));
    }

    static int numberOfSteps(int n)
    {
        if(n==0) return 0;
        if(n%2==0) return 1 + numberOfSteps(n/2);
        else return 1 + numberOfSteps(n-1);
    }
}
