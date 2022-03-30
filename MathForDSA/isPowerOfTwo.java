package com.dsapackage.MathForDSA;

import java.util.Scanner;

public class isPowerOfTwo
{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int res = checkPower(n);
        res = res==0?1:0;
        System.out.println(res);
    }

    static int checkPower(int n) {
        return (n & (n-1));
    }

}
