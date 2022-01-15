package com.dsapackage.OOPs.Inheritance;

public class Child extends Base
{
    static String job;

    Child(String name, int age, String job)
    {
        super(name, age);
        Child.job = job;
    }

    public static void main(String[] args) {
        Child obj = new Child("Rimaansh", 19, "Software Engineer");
        Base.greet();
        greet();
    }

    static void greet()
    {
        System.out.println(Child.job);
    }
}
