package com.dsapackage.Leetcode;

public class OddValuesInAMatrix1252
{
    public static void main(String[] args)
    {
        int m = 2;
        int n = 3;
        int[][] indices = {{0,1},{1,1}};
        System.out.println(oddCells(m, n, indices));
    }

    static int oddCells(int m, int n, int[][] indices)
    {
        int[][] arr = new int [m][n];

        for(int i=0; i< indices.length;i++)
        {
            for(int j = indices[i][0]; j<=indices[i][0]; j++)
            {
                for(int k = 0; k<arr[0].length; k++)
                {
                    arr[j][k]+=1;
                }
            }

            for(int j = 0; j<arr.length; j++)
            {
                for(int k = indices[i][1]; k <=indices[i][1]; k++)
                {
                    arr[j][k]+=1;
                }
            }
        }

        int c=0;
        for(int[] a : arr){
            for(int ele: a){
                if(ele % 2 !=0) c++;
            }
        }
        return c;
    }
}
