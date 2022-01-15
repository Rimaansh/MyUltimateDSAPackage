package com.dsapackage.ArrayAndArrayLists;

import java.util.Scanner;

public class TwoDArray
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int[][] arr = {
                {1, 2, 4},
                {32, 5},
                {34, 54, 66, 565}
        };

        for(int rows[] : arr)
        {
            for(int ele : rows)
            {
                System.out.print(ele+"\t");
            }
            System.out.println();
        }
    }
}
