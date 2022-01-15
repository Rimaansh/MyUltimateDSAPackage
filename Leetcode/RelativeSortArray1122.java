package com.dsapackage.Leetcode;

import java.util.Arrays;

public class RelativeSortArray1122
{
    public static void main(String[] args)
    {
        int[] arr1 = {2,3,1,3,2,4,6,7,9,2,19};
        int[] arr2 = {2, 1, 4, 3, 9, 6};
        System.out.println(Arrays.toString(relativeSortArray(arr1, arr2)));
    }

    static int[] relativeSortArray(int[] arr1, int[] arr2)
    {
        int[] ans = new int[arr1.length];
        int c = 0;
        int c2 = 0;
        int pointer = 0;
        int pointer2 = 0;

        while (pointer < arr2.length)
        {
            for (int i = 0; i < arr1.length; i++)
            {
                if (arr2[pointer] == arr1[i])
                {
                    ans[c] = arr2[pointer];
                    c++;
                }
            }
            pointer++;
        }

        int[] left = new int[arr1.length - c];

        boolean flag = false;

        for (int i = 0; i < arr1.length; i++)
        {
            flag = false;
            for(int j = 0; j < arr2.length; j++)
            {
                if (arr2[j] == arr1[i]) flag = true;
            }

            if(!flag) left[c2++] = arr1[i];
        }

        Arrays.sort(left);

        c2=0;

        for(int i = c; i<ans.length; i++)
        {
            ans[i] = left[c2++];
        }

        return ans;
    }
}
