package com.dsapackage.Leetcode;

public class MajorityElement169
{
    public static void main(String[] args)
    {
        int[] arr = {4, 4, 3, 3, 4};
        System.out.println(findMajor(arr));
    }

    static int findMajor(int[] arr)
    {
        int maj = arr[0];
        int c = 1;
        for(int i = 1; i < arr.length; i++)
        {
            if(maj != arr[i])
            {
                c--;
                if(c==0)
                {
                    maj = arr[i];
                    c = 1;
                }
            } else c++;
        }
        return maj;
    }
}
