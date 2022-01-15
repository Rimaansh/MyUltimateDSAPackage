package com.dsapackage.Leetcode;

import java.util.Arrays;

public class FlippingAnImage832
{
    public static void main(String[] args)
    {
        int[][] image = {{1, 1, 0}, {1, 1, 0}, {1, 1, 0}};

        for(int[] v :image) {
            System.out.print(Arrays.toString(v)+ " ");
        }

        System.out.println();

        int[][] arr = flipAndInvertImage(image);

        for(int[] v :arr) {
            System.out.print(Arrays.toString(v)+ " ");
        }

    }

    static int[][] flipAndInvertImage(int[][] image)
    {
        int r = image.length;
        int c = image[0].length;
        int[][] arr = new int [r][c];

        for(int i = 0; i< r; i++)
        {
            int c2 = c-1;
            for(int j = 0; j<c; j++)
            {
                arr[i][j] = image[i][c2--];
                arr[i][j] = (arr[i][j] == 1) ? 0 : 1;
            }
        }
        return arr;
    }

}
