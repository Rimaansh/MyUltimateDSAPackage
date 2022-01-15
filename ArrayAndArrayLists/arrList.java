package com.dsapackage.ArrayAndArrayLists;

import java.util.*;
import java.util.ArrayList;

public class arrList
{
    public static void main(String[] args) {
        Scanner in = new Scanner (System.in);
        ArrayList<Integer> list = new ArrayList<>(2);

        list.add(248);
        list.add(53);
        list.add(2344348);
        list.add(24823);
        list.add(65);
//        System.out.println(list);
//        list.remove(3);
//        System.out.println(list);
//        System.out.println(list.get(1));

//        for(int ele : list){
//            System.out.print(ele +"\t");
//        }
    }
}
/*Size of ArrayList is fixed internally but when the ArrayList gets fills to a certain amount,
* It will create a new list of double (not exactly) the size,
* Old elements are copied in the new list and the old list is deleted. */
