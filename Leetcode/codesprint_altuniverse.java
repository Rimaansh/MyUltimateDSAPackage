package com.dsapackage.Leetcode;

import java.util.Scanner;

public class codesprint_altuniverse
{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int y = in.nextInt();
        int x = in.nextInt();
        int days = 0;
        if(n>x)
        {
            while(days<y)
            {
                if(days!=0 && days%7==6) {
                    System.out.println(days);
                    return;
                }
                else
                {
                    days++;
                }
            }

            System.out.println(days);
        }
        else System.out.println("-1");
    }
}
