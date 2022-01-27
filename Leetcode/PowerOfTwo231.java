package com.dsapackage.Leetcode;

import java.util.Scanner;

public class PowerOfTwo231
{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        System.out.println(isPowerOfTwo(n));
    }

    static boolean isPowerOfTwo(int n) {
        if(n==1) return true;
        if(n==0) return false;
        else
        {
            if(n%2==0){
                return isPowerOfTwo(n/2);
            }
            else return false;
        }
    }
}
