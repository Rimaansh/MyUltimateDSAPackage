package com.dsapackage.CodeChef;

import java.util.Scanner;

public class EasyPronunciation
{
        public static void main(String[] args)
        {
            Scanner in = new Scanner (System.in);
            int t = in.nextInt();
            while(t-->0)
            {
                int n = in.nextInt();
                String s = in.next();

                String sub = "";
                String res="yes";

                if(n<3)
                {
                    res = "yes";
                }
                else
                {
                    for(int i = 0; i<(n-3); i++)
                    {
                        sub = s.substring(i, i+4);
                        if(!isPresent(sub)){
                            res = "no";
                            break;
                        }
                    }
                }
                System.out.println(res);
            }
        }

    static boolean isPresent(String s) {
        for(int i = 0; i<s.length(); i++)
        {
            char ch = s.charAt(i);
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                return true;
        }
        return false;
    }

//    public static void main(String[] args) {
//        System.out.println(positionNextVowel("schtschurowskia", 1, 15));
//    }
}