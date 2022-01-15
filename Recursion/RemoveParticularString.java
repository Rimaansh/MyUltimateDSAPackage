package com.dsapackage.Recursion;

public class RemoveParticularString
{
    public static void main(String[] args) {
        System.out.println(remove("abcdapplebcd","apple", 0, ""));
        System.out.println(remove2("abcdapplebcd","apple", 0));
    }

    static String remove(String s, String src, int pointer, String res)
    {
        if(pointer >= s.length() - src.length()) return res + s.substring(pointer);

        String str = s.substring(pointer, pointer + src.length());

        if(str.equals(src)) return remove(s, src, pointer + src.length(), res);
        else
        {
            res = res + s.charAt(pointer);
            return remove(s, src, pointer + 1, res);
        }
    }

    static String remove2(String s, String src, int pointer) //without extra variable
    {
        if(pointer >= s.length() - src.length()) return s.substring(pointer);

        String str = s.substring(pointer, pointer + src.length());

        if(str.equals(src)) return remove2(s, src, pointer + src.length());
        else return s.charAt(pointer) + remove2(s, src, pointer + 1);
    }
}