package com.dsapackage.Assorted;
import java.util.Scanner;

public class PrimeIsFineCodechef
{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int m, t;
        m = in.nextInt();
        t = in.nextInt();
        System.out.println(primeIsFine(m,t));
    }

    public static String primeIsFine(int m, int t)
    {
        int primeCounter = 0;
        for (int i = 2; i <= m; i++)
        {
            if(checkPrime(i))
            {
                for (int j = 2; j < i; j++) {
                    if(checkPrime(j)){
                        int next = nextPrime(j);
                        if((1 + j + next) == i) primeCounter++;
                    }
                }
            }
        }
        if(primeCounter >= t) return "YES";
        else return "NO";
    }

    public static int nextPrime(int n) {
        for (int i = n+1; ; i++) {
            if(checkPrime(i)) return i;
        }
    }

    public static boolean checkPrime(int n) {
        for (int i = 2; i*i <= n; i++) {
            if(n%i == 0) return false;
        }
        return true;
    }
}
