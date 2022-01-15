package com.dsapackage.LinkedLists.SLL;

public class SinglyLinkedList
{
    private Node head;
    private Node tail;
    private int size;

    public SinglyLinkedList()
    {
        this.size = 0;
    }

    private class Node {
        private int value;
        private Node next;

        public Node (int value)
        {
            this.value = value;
        }

        public Node(int value, Node next)
        {
            this.value = value;
            this.next = next;
        }
    }

    public void deleteFirst() {
        if(head == tail)
        {
            head = tail = null;
            return;
        }

        head = head.next;
        size--;
    }

    public void deleteLast() {
        if(size<=1) {
            deleteFirst();
            return;
        }

        Node secondLast = get(size - 2);

        int val = tail.value;
        tail = secondLast;
        tail.next = null;
        size--;
    }

    public void delete (int index) {
        if(index==0) {
            deleteFirst();
            return;
        } else if (index == size-1) {
            deleteLast();
            return;
        }

        Node prev = get(index - 1);
        // int val = prev.next.value; -> Use this to return deleted value.
        prev.next = prev.next.next;
        size--;
    }

    public Node get(int index) {
        Node node = head;

        for (int i = 0; i < index; i++) {
            node = node.next;
        }

        return node;
    }

    public void insertFirst(int value) {
        Node node = new Node(value);
        node.next = head;
        head = node;

        if(tail==null) tail = head;  //for the first element

        size++;
    }

    public void insertLast(int value) {
        if(tail == null)
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
        if(index==0) {
            insertFirst(value);
            return;
        }

        if(index == size){
            insertLast(value);
            return;
        }

        Node temp = head;

        for (int i = 1; i < index; i++) {
            temp = temp.next;
        }

        Node node = new Node(value, temp.next);
        temp.next = node;

        size++;
    }

    public void display() {
        Node temp = head;

        while(temp != null)
        {
            System.out.print(temp.value+" -> ");
            temp = temp.next;
        }
        System.out.println("END");
        //System.out.println(size);
    }

    public Node find(int value) {
        Node node = head;
        while(node != null)
        {
            if(node.value == value) return node;
            node = node.next;
        }
        return null;
    }

    public void insertUsingRecursion(int value, int index)
    {

    }
}
