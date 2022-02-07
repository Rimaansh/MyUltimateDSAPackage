package com.dsapackage.IEEEproblems;
//https://www.codechef.com/problems/CRDGAME3

import java.util.Scanner;

public class CodechefCRDGAME3
{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        do {
            int pc = in.nextInt();
            int pr = in.nextInt();
            int digitsc, digitsr;

            if(pc%9==0)
                digitsc = pc/9;
            else
                digitsc = pc/9 + 1;

            if(pr%9==0)
                digitsr = pr/9;
            else
                digitsr = pr/9 + 1;

            if(digitsc<digitsr)
                System.out.println("0 "+digitsc);
            else
                System.out.println("1 "+digitsr);

            t--;
        }while(t>0);
    }
}
