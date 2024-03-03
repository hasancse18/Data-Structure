/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package oop;

/**
 *
 * @author hasan
 */
public class OOP {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        //Box box1=new Box(1,2,3);
       
        BoxWeight box2=new BoxWeight(10,20,30,40);//weight,l,w,h
//         System.out.println(box1.h);
//        System.out.println(box2.h);
        //box1.weight=2;
        //copy constructor is called
        BoxWeight box3=new BoxWeight(box2);//weight,l,w,h
        //System.out.println(box3.h+" "+box3.l+" "+box3.w+" "+box3.weight);

        //super class reference can assign the child class object. Which member function can be access that is depend on super class reference
        Box box =new BoxWeight(11,20,33,40);
        //System.out.println(box.h);
        Subclass ob=new Subclass(100,"me");
        int n=ob.getNum();
        System.out.println(n);
        
    }
    
}
