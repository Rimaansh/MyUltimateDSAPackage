package com.dsapackage.Patterns;

public class patternTwentyEight
{
    public static void main(String[] args)
    {
        int n = 7;
        int j;

        for (int i = 0; i < 2 * n ; i++)
        {
            int spaces = i>n? i - n + 1 : n - i + 1;
            int stars = i>n? n - spaces + 1  : i;

            for(j = 0; j< spaces; j++) System.out.print(" ");
            for(j = 0; j< stars; j++) System.out.print("* ");
            System.out.println();
        }
    }
}
