/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package linkedlist;

import java.util.*;

/**
 *
 * @author hasan
 */
public class reverse {
    public static void main(String[] args) {
        LinkedList<String> list=new LinkedList<>();
        LinkedList<String>list1=new LinkedList<>();

        
        Scanner sc=new Scanner(System.in);
        
        for(int i=0;i<5;i++)
        {
            String str =sc.nextLine();
            list.addLast(str);
            
        }
        for(int i=0;i<5;i++)
        {
            list1.addFirst(list.get(i));
        }
        System.out.println(list1);
        
    }
    
}
