package com.dsapackage.Patterns;

public class patternThirtyOne
{
    public static void main(String[] args)
    {
        int n = 4;
        n = n * 2;

        for (int i = 0; i <= n; i++)
        {
            for(int j = 0; j <= n; j++)
            {
                int numToBePrinted = calcMinDistance(i, j, n);
                numToBePrinted = Math.abs(n/2 - numToBePrinted );
                System.out.print(numToBePrinted+" ");
            }
            System.out.println();
        }
    }

    static int calcMinDistance(int row, int column, int n)
    {
        int leftDistance = row;
        int rightDistance = n - row;
        int topDistance = column;
        int bottomDistance = n - column;
        return(Math.min(Math.min(leftDistance, rightDistance), Math.min(topDistance, bottomDistance)));
    }
}
