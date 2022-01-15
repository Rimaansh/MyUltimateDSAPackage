package com.dsapackage.Recursion;

public class PrintingNos
{
    /*
    static int rev;

    PrintingNos() {
        rev = 0;
    }

    static void reverseNo(int n)
    {
        if(n==0) return;
        rev = rev * 10 + n%10;
        reverseNo(n/10);
    }
    */ //Cheating Method cuz taking variable outside the function

    public static void main(String[] args) {
        int n = 30204;
        System.out.println(countZeroes(n, 0));
    }

    static int countZeroes(int n, int c)
    {
        if(n==0) return c;
        if(n%10==0) c++;
        return countZeroes(n/10, c);
    }

    static int reverseNo(int n, int dgt)
    {
        if(n==0) return 0;
        return (int)(n%10*Math.pow(10,dgt)) + reverseNo(n/10, dgt-1);
    }

    static int countDigits(int n)
    {
        int c = 0;
        while(n>0)
        {
            n/=10;
            c++;
        }
        return c;//or directly --> return (int)(Math.log10(n)) + 1;
    }

    static void print(int n)
    {
        if(n==0) return;
        System.out.println(n);
        print (n-1);
    }

    static void revPrint(int n)
    {
        if(n==0) return;
        revPrint(n-1);
        System.out.println(n);
    }

    static int productNto1 (int n)
    {
        if(n==1) return 1;
        return n*productNto1(n-1);
    }

    static int sumNto1 (int n)
    {
        if(n==1) return n;
        return n+sumNto1(n-1);
    }

    static int sumOfDigits(int n)
    {
        if(n==0) return 0;
        return (n%10 + sumOfDigits(n/10));
    }

    static int productOfDigits(int n)
    {
        if(n==0) return 1;
        return (n%10 * productOfDigits(n/10));
    }
}