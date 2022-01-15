package com.dsapackage.OOPs.StaticExample;

public class Main
{
    public static void main(String[] args)
    {
        Human first = new Human("Rimaansh", 19, false);
        Human second = new Human("Arsh", 18, false);
        Human third = new Human("Aditya", 19, false);

        //whenever accessing, modifying or declaring static variables, don't do it via the reference variable or the object name
        //use class name instead

        System.out.println(first.population);   //should use Human.population as it is the Convention
        System.out.println(second.population);  //should use Human.population as it is the Convention
        System.out.println(third.population);  //should use Human.population as it is the Convention
    }
}
