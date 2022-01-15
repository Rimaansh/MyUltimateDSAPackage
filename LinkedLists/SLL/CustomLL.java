package com.dsapackage.LinkedLists.SLL;

public class CustomLL
{
    private Node head;
    private Node tail;
    private int size;

    public CustomLL()
    {
        this.size = 0;
    }

    private class Node {
        private final int value;

        private Node next;

        public Node(int value) {
            this.value = value;
        }

        public Node(int value, Node next) {
            this.value = value;
            this.next = next;
        }
    }

    public void insertFirst(int value) {
        Node node = new Node(value);
        node.next = head;
        head = node;

        if(tail == null)
        {
            tail = head;
        }
        size++;
    }

    public void display() {
        if(head == null) {
            System.out.println("Empty LIST");
            return;
        }
        Node temp = head;
        while(temp!=null)
        {
            System.out.print(temp.value+" -> ");
            temp = temp.next;
        }
        System.out.println("END");
    }

    public void insertLast(int value){
        if(head == null)
        {
            insertFirst(value);
            return;
        }

        Node node = new Node(value);
        tail.next = node;
        tail = node;
        size++;
    }

    public void insert(int value, int index) {
        if(index>size || index == size){
            insertLast(value);
            return;
        }

        if(index == 0) {
            insertFirst(value);
            return;
        }

        int pointer = 0;
        Node temp = head;
        while(pointer!=index-1)
        {
            temp = temp.next;
            pointer++;
        }

        Node node = new Node(value, temp.next);
        temp.next = node;
        //or replace above two lines with -> temp.next = new Node(value, temp.next);
        size++;
    }

    public int deleteFirst() {
        if(head == null) return -404;

        int value = head.value;
        if(head == tail)
        {
            head = tail = null;
        }
        else
        {
            head = head.next;
        }
        size--;
        return value;
    }

    public int deleteLast() {
        if(head == null) return -404;
        if(head == tail)
        {
            return deleteFirst();
        }
        Node temp = head;
        while(temp.next!=tail)
        {
            temp = temp.next;
        }
        int value = tail.value;
        tail = temp;
        tail.next = null;
        size--;
        return value;
    }
}
