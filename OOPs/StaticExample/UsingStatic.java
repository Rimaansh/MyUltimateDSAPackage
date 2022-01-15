package com.dsapackage.OOPs.StaticExample;

public class UsingStatic
{
    public static void main(String[] args)
    {
        UsingStatic obj = new UsingStatic();
        obj.greeting();
    }

    void greeting()
    {
        System.out.println("Hi This is Rimaansh");
        fun();
    }

    void fun()
    {
        System.out.println("I'm Having fun");
    }
}
