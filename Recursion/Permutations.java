package com.dsapackage.Recursion;

import java.util.ArrayList;

public class Permutations
{
    public static void main(String[] args) {
        generatePermutations("abcd","");
    }

    static void generatePermutations(String p, String up)
    {
        if(up.isEmpty())
        {
            System.out.print("\""+p+"\", ");
            return;
        }

        char ch = up.charAt(0);

        for(int i = 0; i<=p.length();i++)
        {
            String f = p.substring(0,i);
            String s = p.substring(i, p.length());
            generatePermutations(f + ch + s, up.substring(1));
        }
    }

    static ArrayList<String> generatePermutationsInArrayList(String p, String up)
    {
        if(up.isEmpty())
        {
            ArrayList<String> list = new ArrayList<>();
            list.add(p);
            return list;
        }

        char ch = up.charAt(0);
        ArrayList<String> prevAns = new ArrayList<>();

        for(int i = 0; i<=p.length(); i++)
        {
            String f = p.substring(0,i);
            String s = p.substring(i, p.length());

            prevAns.addAll(generatePermutationsInArrayList(f + ch + s, up.substring(1)));
        }
        return prevAns;
    }

    static int countPermutations(String p, String up) {
        if (up.isEmpty()) {
            return 1;
        }

        char ch = up.charAt(0);
        int c = 0;

        for (int i = 0; i <= p.length(); i++) {
            String f = p.substring(0, i);
            String s = p.substring(i, p.length());

            c += countPermutations(f + ch + s, up.substring(1));
        }
        return c;
    }

}
