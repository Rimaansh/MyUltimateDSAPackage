package com.dsapackage.OOPs.StaticExample;

import java.util.Arrays;

public class InnerClasses // outside classes cannot be static
{
    static class Test
    {
        static String name;

        public Test(String name)
        {
            this.name = name;
        }

        void greeting()
        {
            System.out.println("Hello from "+Test.name);
        }
    }

    public static void main(String[] args)
    {
        Test obj = new Test("Rim");
        Test obj2 = new Test("Rim2");

        obj.greeting();
        obj2.greeting();
    }
}
