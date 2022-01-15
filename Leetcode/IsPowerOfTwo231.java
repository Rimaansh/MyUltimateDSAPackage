package com.dsapackage.Leetcode;

public class IsPowerOfTwo231
{
    public static void main(String[] args)
    {
        System.out.println(isPowerOfTwo(2));
    }

    static boolean isPowerOfTwo(int n)
    {
        int pow = 1;

        while (pow <= n)
        {
            if(pow == n) return true;
            pow*=2;
        }

        return false;
    }
}
