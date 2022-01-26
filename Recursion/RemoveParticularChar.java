package com.dsapackage.Recursion;

public class RemoveParticularChar {
    public static void main(String[] args)
    {

    }

    static String removeChar(String str, char ch, String nstr, int pointer) {
        if(pointer==str.length()) return nstr;

        if(str.charAt(pointer) != ch) nstr = nstr + str.charAt(pointer);
        return removeChar(str, ch, nstr, pointer+1);
    }

    static String removeChar(String str, char ch, int pointer){
        String temp = "";

        if(pointer == str.length()) return "";

        if(str.charAt(pointer) != ch){
            temp = temp + str.charAt(pointer);
        }

        temp = temp + removeChar(str, ch, pointer +1);
        return temp;
    }
}
