package com.dsapackage.Leetcode;

import java.util.Scanner;

public class codesprint_lowercaseObsession
{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int len = in.nextInt(), i;
        String s = in.next();
        int[] arr = new int[len];
        int perfect = 0;

        for(i = 0; i<len; i++)
        {
            char ch = s.charAt(i);
            if(Character.isLowerCase(ch)) arr[i] = 1;
            else arr[i] = 0;
        }
        int firstLowercase = -1;

        for(i = 0; i<len; i++)
        {
            if(arr[i]==1)
            {
                firstLowercase = i;
                break;
            }
        }
        if(firstLowercase-0>1) perfect++;

        int c=0;

        for(i = firstLowercase; i<len;i++)
        {
            if(arr[i]==1) c++;
            else
            {
                if(c>1)
                {
                    perfect++;
                }
                c = 0;
                i++;
            }
        }

        System.out.println(perfect);
    }
}
