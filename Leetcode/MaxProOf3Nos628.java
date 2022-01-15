package com.dsapackage.Leetcode;

public class MaxProOf3Nos628
{
    public static void main(String[] args) {
        int[] nums = {-1,-2,-3};
        System.out.println(maximumProduct(nums));
    }
    static int maximumProduct(int[] nums)
    {
        int maxInd = findMax(nums);
        int max = nums[maxInd];
        nums[maxInd] = Integer.MIN_VALUE;

        int secMaxInd = findMax(nums);
        int secMax = nums[secMaxInd];
        nums[secMaxInd] = Integer.MIN_VALUE;

        int thirdMaxInd = findMax(nums);
        int thirdMax = nums[thirdMaxInd];
        nums[thirdMaxInd] = Integer.MIN_VALUE;

        return (max*secMax*thirdMax);
    }

    static int findMax (int[] nums)
    {
        int max = Integer.MIN_VALUE;
        int maxInd = -1;
        for(int i = 0; i < nums.length; i++)
        {
            if(Math.abs(nums[i])>Math.abs(max))
            {
                max = nums[i];
                maxInd = i;
            }
        }
        return maxInd;
    }
}
