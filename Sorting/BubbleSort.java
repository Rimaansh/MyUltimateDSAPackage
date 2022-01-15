package com.dsapackage.Sorting;

import java.util.*;

public class BubbleSort
{
    public static void main(String[] args)
    {
        int[] arr = {1, 6, 3, 12, 1, 54, 64, 21, 2, 0};
        System.out.println(Arrays.toString(arr));

        //sorting code below
        for(int i =0; i< arr.length; i++)
        {
            boolean swapped = false;
            for(int j = 1; j<arr.length-i; j++)
            {
                if(arr[j]<arr[j-1]){
                    int temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;
                    swapped = true;
                }
            }

            if(!swapped) break; //if no swapping takes place in the particular iteration
                                //it means that the array is sorted; so BREAK
        }

        System.out.println(Arrays.toString(arr));
    }
}
