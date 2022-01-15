package com.dsapackage.Recursion;

public class Fibonacci
{
    public static void main(String[] args)
    {
        System.out.println(fibonacci(0, 1, 5));
        System.out.println(fibo(5));
    }

    static int fibonacci(int f, int s, int n)
    {
        if(n==1) return s;

        return fibonacci(s, f+s, n-1);
    }

    static int fibo (int n)
    {
        if(n==0 || n==1) return n;

        return fibo(n-1) + fibo(n-2);
    }
}
