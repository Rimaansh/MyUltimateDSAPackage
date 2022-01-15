package com.dsapackage.Recursion;

import java.util.ArrayList;

public class LinearSearch
{
    public static void main(String[] args)
    {
        int[] arr = {1, 228, 34, 323, 233, 1};
//        System.out.println(search(arr, 1, 0));
//        System.out.println(findIndex(arr, 1, 0));
//        System.out.println(findLastIndex(arr, 1, arr.length-1));
//        System.out.println(findAllIndex(arr, 1, 0, new ArrayList<>()));
        System.out.println(findAllIndex2(arr, 1, 0));
    }

    static ArrayList<Integer> findAllIndex2(int[] arr, int src, int index)
    {
        ArrayList<Integer> list = new ArrayList<>();

        if(index == arr.length) return list;

        //this will contain answer for that function call only
        if(arr[index] == src) list.add(index);

        ArrayList<Integer> ansFromBelowCalls = findAllIndex2(arr, src, index+1);
        list.addAll(ansFromBelowCalls);
        return list;
    }

    static ArrayList<Integer> findAllIndex(int[] arr, int src, int index, ArrayList<Integer> list)
    {
        if(index == arr.length) return list;

        if(arr[index] == src) list.add(index);
        return findAllIndex(arr, src, index+1, list);
    }

    static boolean search(int[] arr, int src, int index)
    {
        if(index == arr.length) return false;

        if(arr[index] == src) return true;
        else return search(arr, src, index+1);
    }

    static int findIndex(int[] arr, int src, int index)
    {
        if(index == arr.length) return -1;

        if(arr[index] == src) return index;
        else return findIndex(arr, src, index+1);
    }

    static int findLastIndex(int[] arr, int src, int index)
    {
        if(index == -1) return -1;

        if(arr[index] == src) return index;
        else return findIndex(arr, src, index-1);
    }
}
