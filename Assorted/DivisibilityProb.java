package com.dsapackage.Assorted;

import java.util.Scanner;

public class DivisibilityProb
{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int tc = in.nextInt();
        int[][] arr = new int[tc][2];
        for(int i = 0; i<tc; i++)
        {
            arr[i][0] = in.nextInt();
            arr[i][1] = in.nextInt();
        }

        for(int i = 0; i<tc; i++)
        {
            System.out.println(divisible(arr[i][0], arr[i][1]));
        }
    }

    static int divisible(int a, int b)
    {
        int c = 0;
        while(a%b!=0)
        {
            if(a%b!=0)
            {
                a += 1;
                c++;
            }
            else return c;
        }
        return c;
    }
}

