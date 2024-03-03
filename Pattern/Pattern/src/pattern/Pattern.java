/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pattern;

import java.util.Scanner;

/**
 *
 * @author hasan
 */
public class Pattern {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
//        Scanner ob=new Scanner(System.in);
//        System.out.println("Enter Row size: ");
//        int a= ob.nextInt();
//        System.out.println("Enter Column size: ");
//        int b=ob.nextInt();
//        for(int i=0;i<a;i++)
//        {
//            for(int j=0;j<b;j++)
//            {
//                System.out.print("*");
//            }
//           System.out.println();
//        }
           Pattern3 ob = new Pattern3();
           ob.fact();
        
    }
    
}
