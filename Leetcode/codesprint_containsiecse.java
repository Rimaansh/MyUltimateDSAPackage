package com.dsapackage.Leetcode;

import java.util.Scanner;

public class codesprint_containsiecse
{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s;
        int t;
        t = in.nextInt();
        do{
            s = in.next();
        boolean res = searchSub(s);
        if(res) System.out.println("YES");
        else System.out.println("NO");
        t--;
        } while(t>0);
    }

    static boolean searchSub(String s) {
        String src = "iecse";
        boolean flag = false;

        for (int i = 0; i < s.length()-src.length()+1; i++) {
            String w = s.substring(i, i+src.length());
            if(w.equals(src)) flag = true;
        }
        return flag;
    }
}
// m a d e w i t h < 3 b  y  i  e  c  s  e
// 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16

/*
int t = in.nextInt();
        do {
            String s = in.next();
            String src = "iecse";
            boolean flag = false;

            for (int i = 0; i < s.length()-src.length(); i++) {
                String w = s.substring(i, i+src.length());
                if(w.equalsIgnoreCase(src)) flag = true;
            }
            if(flag) System.out.println("YES");
            else System.out.println("NO");
            t--;
        } while(t>0);

madewith<3byiecse
IECSE...iEcSe...
iciciecodingcse

*/