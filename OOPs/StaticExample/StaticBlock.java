package com.dsapackage.OOPs.StaticExample;

public class StaticBlock
{
    static int a = 4;
    static int b;

    static  // will only run once, when the first object is created...
    {
        System.out.println("From The static block");
        b = a + 6;
    }

    public static void main(String[] args)
    {
        StaticBlock obj = new StaticBlock();
        System.out.println(obj.a + " " + obj.b); //StaticBlock.a or StaticBlock.b will also work

        StaticBlock obj2 = new StaticBlock();
        obj.a += 2;
        System.out.println(obj2.a + " " + obj2.b);

    }
}
