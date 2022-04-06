package com.dsapackage.IEEEproblems;

import java.util.Scanner;
public class CodeforcesSquareString
{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        in.nextLine();
        while(t>0)
        {
            t--;
            String s = in.nextLine();
            int len = s.length();

            if (len % 2 != 0) {
                System.out.println("NO");
            } else
            {
                String left = s.substring(0, len/2);
                String right = s.substring(len/2);
                if (left.equals(right))
                    System.out.println("YES");
                else
                    System.out.println("NO");
            }
        }
    }
}
