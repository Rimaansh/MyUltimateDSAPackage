package com.dsapackage.LinkedLists.SLL;

public class Main
{
    public static void main(String[] args)
    {
        SinglyLinkedList list = new SinglyLinkedList();

        list.insertFirst(13);
        list.insertFirst(32);
        list.insertFirst(43);
        list.insertLast(56);
        list.insertLast(63);
        list.insert(24, 2);

        list.display();

        list.deleteLast();

        list.display();

        list.delete(2);

        list.display();
    }
}