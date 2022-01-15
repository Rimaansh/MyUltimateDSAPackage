package com.dsapackage.Recursion;

import java.sql.SQLOutput;

public class RemoveParticularChar {
    public static void main(String[] args)
    {

    }

    static String removeChar(String str, char ch, String nstr, int pointer)
    {
        if(pointer==str.length()) return nstr;

        if(str.charAt(pointer) != ch) nstr = nstr + str.charAt(pointer);
        return removeChar(str, ch, nstr, pointer+1);
    }

    static String removeChar(String str, char ch, int pointer)
    {
        if(pointer==str.length() || str.length()==0) return "";

        String s="";
        if(str.charAt(pointer)!=ch)  s = s + str.charAt(pointer) + removeChar(str, ch, pointer + 1);
        else s = s + removeChar(str, ch, pointer + 1);

        return s;
    }
}
