package com.dsapackage.Recursion;

import java.util.ArrayList;

public class LinearSearchAgain
{
    public static void main(String[] args) {
        int[] arr = {42, 6, 423, 6, 6, 353, 6};
        System.out.println(searchMultiple(arr, 6, 0));
    }

    static boolean search(int[] arr, int src, int pointer) {
        if(pointer == arr.length) return false;

        if(arr[pointer] == src) return true;
        else return search(arr, src, pointer+1);
    }

    static ArrayList searchMultiple(int[] arr, int src, int pointer) {
        ArrayList<Integer> list = new ArrayList<Integer>();

        if(pointer == arr.length) return list;
        if(arr[pointer] == src) list.add(pointer);
        ArrayList<Integer> ansFromBelowCalls = searchMultiple(arr, src, pointer+1);

        list.addAll(ansFromBelowCalls);
        return list;
    }
}
