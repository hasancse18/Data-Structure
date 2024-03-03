/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pattern;

/**
 *
 * @author hasan
 */
public class ButterFlyPattern {
    public static void main(String[] args) {
        int n=4;
        for(int i=1;i<=n;i++)
        {
            //for 1st
            for(int j=1;j<=i;j++)
            {
                System.out.print("*");
            }
            //for spaces
            int k=n-i;
            for(int j=1;j<=2*k;j++)
            {
                System.out.print(" ");
            }
            for(int j=1;j<=i;j++)
            {
                System.out.print("*");
            }
            System.out.print("\n");
        }
         for(int i=0;i<n;i++)
        {
            for(int j=1;j<=n-i;j++)
            {
                System.out.print("*");
            }
            for(int j=0;j<2*i;j++)
            {
                System.out.print(" ");
            }
            for(int j=1;j<=n-i;j++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
    
   
    
    
}
