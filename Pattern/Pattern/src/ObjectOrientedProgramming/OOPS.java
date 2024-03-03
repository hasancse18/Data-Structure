/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ObjectOrientedProgramming;

import static java.sql.JDBCType.NULL;

class Pen{
    String name;
    String type;
    public void prints()
    {
        System.out.println("Print Something");
    }
    //Default Constructor
    Pen()
    {
       // System.out.println("Default Constructor");
        name="";
        type="";
    }
    //Parameterised Constructor
    Pen(String name,String type)
    {
        this.name=name;
        this.type=type;
    }
    //Copy Constructor
    Pen(Pen ob)
    {
        this.name=ob.name;
        this.type=ob.type;
    }
    public void printInfo()
    {
        System.out.println(this.name);
        System.out.println(this.type);
    }
}
public class OOPS {
    public static void main(String[] args) {
        Pen ob1=new Pen("Matador","Ballpen");
         Pen ob2=new Pen("High-school","Gel");
//        ob1.name="Matador";
//        ob1.type="Ballpen";
        Pen ob3=new Pen(ob1);
        Pen ob4 = new Pen(ob2);
        System.out.println("Information of Object 1: ");
        ob3.printInfo();
        System.out.println("Information od Object 2: ");
        ob4.printInfo();
    }
    
}
