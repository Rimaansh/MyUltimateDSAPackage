package com.dsapackage.LinkedLists.CLL;

import java.sql.SQLOutput;

public class CircularLinkedList
{
    private Node head;
    private Node tail;
    private int size;

    public CircularLinkedList()
    {
        this.size = 0;
        this.head = null;
        this.tail = null;
    }

    private class Node
    {
        private int value;
        Node next;

        public Node(int value)
        {
            this.value = value;
        }
    }

    public void insert(int val)
    {
        Node node = new Node (val);

        if(head == null)
        {
            head = node;
            tail = node;
            size++;
            return;
        }

        tail.next = node;
        node.next = head;
        tail = node;
        size++;
    }

    public void display()
    {
            Node node = head;

            if(size == 0)
            {
                System.out.println("Empty List");
                return;
            }
            if(size == 1){
                System.out.println(head.value + " -> HEAD");
                return;
            }

            if (head != null) {
                do {
                    System.out.print(node.value + " -> ");
                    node = node.next;
                } while (node != head);
            }
            System.out.println("HEAD");

    }

    public void delete (int value)
    {
        Node node = head;

        if(node == null) {
            return;
        }

        if(node.value == value){
            head = head.next;
            tail.next = head;
            size--;
            return;
        }

        do{
            if(node.next.value == value)
            {
                node.next = node.next.next;
                break;
            }
            node = node.next;
        } while(node!=head);
        size--;
    }

    public Node getAfter(int value)
    {
        Node node = head;
        while(node.value!=value)
        {
            node = node.next;
        }
        return node.next;
    }

    public Node getPrev(int value)
    {
        Node node = head;
        while(node.next.value!=value)
        {
            node = node.next;
        }
        return node;
    }

    public void displayHead()
    {
        System.out.println(head.value);
    }
}
