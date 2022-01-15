package com.dsapackage.Recursion;

public class Patterns
{
    public static void main(String[] args) {
        print4(5,0);
    }

    static void print(int n)
    {
        if(n==0) return;
        for (int i = 0; i < n; i++) {
            System.out.print("* ");
        }
        System.out.println();
        print(n-1);
    }

    static void print2(int row, int col)
    {
        if(row == 0) return;

        if(col<row)
        {
            System.out.print("*");
            print2(row,col + 1);
        }
        else {
            System.out.println();
            print2(row - 1, 0);
        }
    }

    static void print3(int n, int stars, int lines)
    {
        if(n>lines) return;

        if(stars<=n)
        {
            System.out.print("*");
            print3(n, stars+1, lines);
        }
        else
        {
            System.out.println();
            print3(n+1,1, lines);
        }
    }

    static void print4(int row, int col)
    {
        if(row == 0) return;

        if(col<row)
        {
            print4(row,col + 1);
            System.out.print("*");
        }
        else
        {
            print4(row - 1, 0);
            System.out.println();
        }
    }
}
