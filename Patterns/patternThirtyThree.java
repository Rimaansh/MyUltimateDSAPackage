package com.dsapackage.Patterns;

public class patternThirtyThree
{
    public static void main(String[] args)
    {
        int n = 5;
        char ch = 'a';
        int c = 1;

        for (int i = 1; i <= n; i++)
        {
            for(int j=1; j<=i; j++)
            {
                if(c%2==1) System.out.print(ch+" ");
                else System.out.print(Character.toUpperCase(ch)+" ");

                ch++;
                c++;
            }
            System.out.println();
        }
    }
}
