package com.dsapackage.LinkedLists.SLL;

public class secondMain
{
    public static void main(String[] args) {
        CustomLL list = new CustomLL();

        list.insert(10, 0);
        System.out.println(list.deleteLast()+" was deleted");
        list.display();
        list.insertLast(2);
        list.insertFirst(23);
        list.insertLast(32);
        list.insert(42, 4);
        list.display();
        System.out.println(list.deleteFirst()+" was deleted");
        list.display();
    }
}
