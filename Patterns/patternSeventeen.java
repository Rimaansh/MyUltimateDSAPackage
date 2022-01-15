package com.dsapackage.Patterns;

public class patternSeventeen
{
    public static void main(String[] args) {
        int n = 4;
        int j;

        for (int i = 1; i < 2*n; i++)
        {
            int spaces = i>n ? i - n : n - i;

            for(j = 1; j <= spaces; j++) System.out.print(" ");

            int cols = i>n ? i - 2*spaces : i;

            for(int k = cols; k>1; k--) System.out.print(k);
            for(int k = 1; k<=cols; k++) System.out.print(k);

            System.out.println();
        }
    }
}
