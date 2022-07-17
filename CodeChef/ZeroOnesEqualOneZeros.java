package com.dsapackage.CodeChef;

import java.util.*;
import java.lang.*;

public class ZeroOnesEqualOneZeros
{
    public static void main(String[] args)
    {
        {
            Scanner in = new Scanner(System.in);
            int t = in.nextInt();
            while(t>0)
            {
                String sub = "1";

                int n = in.nextInt();
                for(int i = 0; i< n-2; i++)
                {
                    sub += "0";
                }
                sub += "1";
                System.out.println(sub);
                t--;
            }
        }
    }
}
