package com.dsapackage.OOPs.Inheritance;

public class Base
{
    static String name;
    static int age;

    public Base(String name, int age) {
        Base.name = name;
        Base.age = age;
    }

    public static void main(String[] args) {

    }

    static void greet()
    {
        System.out.print(Base.name + " at age "+ Base.age + " is a ");
    }
}
