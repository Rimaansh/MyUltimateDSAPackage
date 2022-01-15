package com.dsapackage.OOPs.SingletonClass;

public class Singleton
{
    private Singleton()
    {

    }

    private static Singleton instance;

    public static Singleton getInstance()
    {
        if(instance==null)
        {
            instance = new Singleton();
        }

        return instance;
    }

    public static void main(String[] args) {

    }
}
