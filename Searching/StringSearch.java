package com.dsapackage.Searching;

import java.util.Scanner;

public class StringSearch
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner (System.in);
        System.out.println("Enter a string");
        String s = in.nextLine();
        System.out.println("Enter a search character");
        char src = (in.next()).charAt(0);
        System.out.print(search(s, src));
        System.out.println(" at index "+ s.indexOf(src));
    }

    static boolean search (String s, char src){
        for(int i =0; i<s.length(); i++){
            if(s.charAt(i) == src) return true;
        }
        return false;
    }
}
