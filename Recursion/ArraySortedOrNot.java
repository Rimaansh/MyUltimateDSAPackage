/*
    static boolean isSorted(int[] arr, int index)
    {
        if(arr.length == 0 || arr.length == 1) return true; //Edge Case

        if(index == arr.length - 1) return true; //Base Case

        if(arr[index]<arr[index+1]) return isSorted(arr, index+1);
        else return false;
    }
    */

package com.dsapackage.Recursion;
public class ArraySortedOrNot
{
    public static void main(String[] args) {
        int[] arr = {};
        System.out.println(isSorted(arr, 0));
    }

    static boolean isSorted(int[] arr, int i)
    {
        if(arr.length == 0) return true;

        if(i == arr.length-1) return true;

        if(arr[i]<arr[i+1] && isSorted(arr, i+1))
            return true;
        else
            return false;
    }
}
