package com.dsapackage.Assorted;

public class TowersOfHanoi {

    public static void main(String args[])
    {
        int n = 5;
        TOH(n, 'A', 'C', 'B');
    }

    static void TOH(int n, char from, char to, char aux)
    {
        if(n==1)
        {
            System.out.println("Move "+n+" from peg " + from + " to " + to);
            return;
        }

        TOH(n-1, from, aux, to);

        System.out.println("Move "+n+" from peg " + from + " to " + to);

        TOH(n-1, aux, to, from);
    }
}
