package com.dsapackage.MathForDSA;

public class SquareRootOfANumber
{
    public static void main(String[] args) {
        int n = 40, p = 3; // p is the no of precision digits
        System.out.printf("%.3f", checksqrt(n, p));
    }

    static double checksqrt(int n, int p)
    {
        int beg = 2;
        int end = n;
        double root = 0.0;

        while(beg<=end)
        {
            int mid = (beg+end)/2;

            if(mid*mid == n)
            {
                return mid;
            }
            else if(mid*mid<n)
            {
                beg = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        double incr = 0.1;


        for(int i = 0; i < p; i++)
        {
            while (root * root <= n) {
                root += incr;
            }
            root -= incr;
            incr /= 10;
        }
        return root;
    }
}
