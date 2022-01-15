package com.dsapackage.LinkedLists.DLL;

public class DoublyLinkedList
{
    private Node head;

    private int size;

    public DoublyLinkedList() {
        this.size = 0;
    }

    private class Node {
        private int value;
        private Node next;
        private Node prev;

        public Node(int value)
        {
            this.value = value;
        }

        public Node(int value, Node next, Node prev)
        {
            this.value = value;
            this.next = next;
            this.prev = prev;
        }
    }

    public void insertFirst(int value)
    {
        Node node = new Node(value);
        node.next = head;
        node.prev = null;

        if(head != null) {
            head.prev = node;
        }

        head = node;
        size++;
    }

    public void insertLast(int value)
    {
        if(head == null) {
            insertFirst(value);
            return;
        }

        Node node = new Node(value);
        Node last = head;

        while(last.next != null){
            last = last.next;
        }

        last.next = node;
        node.prev = last;
        node.next = null;
        last = node;
        size++;
    }

    public void insert(int value, int index)
    {

        if(index > size || index == 0){
            insertFirst(value);
            return;
        }

        if(index == size){
            insertLast(value);
            return;
        }

        Node previous = head;

        for (int i = 1; i < index; i++) {
            previous = previous.next;
        }

        Node after = previous.next;
        Node node = new Node(value, after, previous);
        previous.next = node;
        after.prev = node;
        size++;
    }

    public void display()
    {
        Node node = head;
        Node last = null;

        while(node!=null){
            System.out.print(node.value+" -> ");
            last = node;
            node = node.next;
        }
        System.out.println("END");

        //Reverse Display
        System.out.print("END <- ");
        while(last != null)
        {
            if(last.prev == null){
                System.out.print(last.value);
            } else {
                System.out.print(last.value+" <- ");
            }
            last = last.prev;
        }
    }
}
