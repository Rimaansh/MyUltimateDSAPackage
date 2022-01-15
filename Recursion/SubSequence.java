package com.dsapackage.Recursion;

import java.util.ArrayList;
import java.util.Collections;

public class SubSequence
{
    public static void main(String[] args)
    {
        String s = "abc";

        System.out.println(generateSubsets("", s));

        System.out.println(generateSubsetsWithAscii("", s));
    }

    static ArrayList generateSubsets(String processed, String unprocessed)
    {
        if(unprocessed.isEmpty()) {
            ArrayList list = new ArrayList<>();
            list.add(processed);
            return list;
        }

        char ch = unprocessed.charAt(0);

        ArrayList left = generateSubsets(processed + ch, unprocessed.substring(1));
        ArrayList right = generateSubsets(processed, unprocessed.substring(1));

        left.addAll(right);
        return left;
    }

    static ArrayList generateSubsetsWithAscii(String p, String up)
    {
        if(up.isEmpty()) {
            ArrayList list = new ArrayList<>();
            list.add(p);
            return list;
        }

        char ch = up.charAt(0);
        String asc = ""+(int)ch;

        ArrayList left = generateSubsetsWithAscii(p + ch, up.substring(1));
        ArrayList mid = generateSubsetsWithAscii(p+asc, up.substring(1));
        ArrayList right = generateSubsetsWithAscii(p, up.substring(1));

        left.addAll(mid);
        left.addAll(right);
        return left;
    }
}
