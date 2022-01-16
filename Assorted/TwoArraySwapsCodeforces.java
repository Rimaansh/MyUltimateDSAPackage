package com.dsapackage.Assorted;

import java.util.Scanner;

public class TwoArraySwapsCodeforces  //MIGHT BE INCORRECT ;_;
{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt(), i;
        do{
            int n = in.nextInt();
            int k = in.nextInt();
            int[] a = new int[n];
            int[] b = new int[n];

            for(i = 0; i<n; i++) {
                a[i] = in.nextInt();
            }

            for(i = 0; i<n; i++) {
                b[i] = in.nextInt();
            }

            int maxInd, minInd;

            for(i = 0; i<k; i++) {
                maxInd = findMax(b);
                minInd = findMin(a);
                swap(a, b, minInd, maxInd);
                b[maxInd] *= -1;
                a[minInd] *= -1;
            }

            int sum = 0;
            for(i = 0; i<n; i++) {
                sum += Math.abs(a[i]);
            }

            System.out.println(sum);
            t--;
        }while(t>0);
    }

    static void swap(int[] a, int[] b, int m, int n) {
        int temp = a[m];
        a[m] = b[n];
        b[n] = temp;
    }

    static int findMax (int[] arr) {
        int maxInd = 0;
        int max = Integer.MIN_VALUE;
        for(int i = 0; i<arr.length; i++)
        {
            if(arr[i]>max && arr[i]>0)
            {
                max = arr[i];
                maxInd = i;
            }
        }
        arr[maxInd] *= -1;
        return maxInd;
    }

    static int findMin (int[] arr) {
        int minInd = 0;
        int min = Integer.MAX_VALUE;
        for(int i = 0; i<arr.length; i++)
        {
            if(arr[i]<min && arr[i]>0)
            {
                min = arr[i];
                minInd = i;
            }
        }
        arr[minInd] *= -1;
        return minInd;
    }
}
