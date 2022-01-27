package com.dsapackage.Leetcode;

public class ReverseString344
{
    public static void main(String[] args) {
        char[] s = {'a', 'b', 'c', 'd'};
        reverseString(s, 0, s.length -1);
        System.out.println(s);
    }

    static void reverseString(char[] s, int start, int end) {
        if(start<=end)
        {
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            reverseString(s, start+1, end-1);
        }
    }
}
