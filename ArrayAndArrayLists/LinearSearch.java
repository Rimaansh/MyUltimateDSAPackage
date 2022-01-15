package com.dsapackage.ArrayAndArrayLists;

import java.util.Scanner;

public class LinearSearch {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.println("Enter size of array");
        int size = in.nextInt();

        int[] arr = new int[size];

        System.out.println("Enter array elements");

        for (int i = 0; i < size; i++) {
            arr[i] = in.nextInt();
        }

        System.out.println("Enter search element");
        var src = in.nextInt();

        /*var res = false;

        for(int ele : arr)
        {
            if (ele == src) {
                res = true;
                break;
            }
        }

        System.out.println(res);*/

        System.out.println(linearSearch(arr, src));
    }

    static int linearSearch(int arr[], int src)
    {
        for(int i=0; i<arr.length; i++)
        {
            if(arr[i] == src) return i;
        }
        return -1;
    }
}
