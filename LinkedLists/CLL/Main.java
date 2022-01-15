package com.dsapackage.LinkedLists.CLL;

public class Main
{
    public static void main(String[] args) {
        CircularLinkedList list = new CircularLinkedList();
        list.insert(76);
        list.display();
        list.delete(76);
        list.display();
        list.insert(33);
        list.insert(23);
        list.insert(213);
        list.insert(232);
        list.delete(33);
        list.display();
        list.delete(232);
        list.display();
    }
}
