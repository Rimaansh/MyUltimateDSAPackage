package com.dsapackage.OOPs.A;

class Main
{
    public static void main(String[] args) {
        Data student1 = new Data("Rimaansh", 31, 93);
        Data student2 = new Data("Arsh", 22, 92);

        Data student3;
        student3 = new Data("Addy", 33, 91);

        Data.display(student1);
        Data.display(student2);
        Data.display(student3);
    }
}

class Data
{
    String name;
    int rollNo, marks;

    Data ()
    {
        this.name = "Not Available";
        this.rollNo = -1;
        this.marks = 0;
    }

    Data (String name, int rollNo, int marks)
    {
        this.name = name;
        this.rollNo = rollNo;
        this.marks = marks;
    }

    static void display(Data student)
    {
        System.out.println(student.name +", " + student.rollNo+ " - "+ student.marks);
    }
}


