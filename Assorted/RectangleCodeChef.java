package com.dsapackage.Assorted;

import java.util.Scanner;

public class RectangleCodeChef {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t, a, b, c, d;
        t = in.nextInt();
        do{
            a = in.nextInt();
            b = in.nextInt();
            c = in.nextInt();
            d = in.nextInt();

            if((a==b && c==d) || (a==c && b==d) || (a==d && c==b))
                System.out.println("YES");
            else
                System.out.println("NO");

            t--;
        }while(t>0);
    }
}
