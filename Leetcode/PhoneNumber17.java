//package com.rimpackage;
//import java.util.ArrayList;
//import java.util.Arrays;
//
//public class PhoneNumber17
//{
//    public static void main(String[] args) {
//        System.out.println(letterCombinations("2345"));
//    }
//
//    static ArrayList<String> letterCombinations(String digits)
//    {
//        int i;
//
//        String[] letters = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
//        ArrayList<Integer> list = new ArrayList<>();
//
//        if(digits.length()==0) return new ArrayList<String>();
//        else
//        {
//            for (i = 0; i < digits.length(); i++) {
//                list.add(Integer.parseInt(digits.charAt(i)+""));
//            }
//
//            int len = list.toArray().length;
//
//            String[] arr = new String[len];
//
//            for (i = 0; i < len; i++) {
//                arr[i] = letters[list.get(i)];
//            }
//        }
//
//    }
//
//    public static ArrayList<String> letterCombinations(String p, String up)
//    {
//        if(up.isEmpty())
//        {
//            ArrayList<String> list = new ArrayList<>();
//            list.add(p);
//            return list;
//        }
//
//        char ch = up.charAt(0);
//        ArrayList<String> prevAns = new ArrayList<>();
//
//        for (int i = 0; i <=p.length(); i++)
//        {
//            String f = p.substring(0, i);
//            String s = p.substring(i, p.length());
//
//            prevAns.addAll(letterCombinations(f + ch + s, up.substring(1)));
//        }
//        return prevAns;
//    }
//}
