package com.dsapackage.LinkedLists.DLL;

public class Main
{
    public static void main(String[] args)
    {
        DoublyLinkedList list = new DoublyLinkedList();

        list.insertLast(76);
        list.insertFirst(13);
        list.insertFirst(32);
        list.insertLast(63);
        list.insert(24, 2);

        list.display();
    }
}
