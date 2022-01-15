package com.dsapackage.MathForDSA;

public class PrimeNos
{
    public static void main(String[] args)
    {
        int n = 2;
        System.out.println(isPrime(n));
    }

    static boolean isPrime(int n)
    {
        if(n<=1) return false;
        int i = 2;

        while(i*i <= n)
        {
            if(n%i == 0) return false;
            else i++;
        }

        return true;
    }
}
