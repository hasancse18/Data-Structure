/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Encapsulation;

/**
 *
 * @author hasan
 */
public class Subclass extends A{
    Subclass(int a,String n)
    {
        super(a,n);
    }
    public static void main(String[] args) {
        Subclass obj=new Subclass(10,"hasan");
    }

   
    
}
