package com.dsapackage.OOPs.StaticExample;

public class Human
{
    String name;
    int age;
    boolean isMarried;
    static int population;

    public Human(String name, int age, boolean isMarried) {
        this.name = name;
        this.age = age;
        this.isMarried = isMarried;

        //whenever accessing, modifying or declaring static variables, don't do it via the reference variable or the object name
        //use class name instead
        Human.population += 1; //can use this.population or just population
    }
}
