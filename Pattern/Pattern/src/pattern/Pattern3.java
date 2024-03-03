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
public class Pattern3 {
    public static void fact() {
        int m=5,n=5;
        for(int i=0;i<m;i++)
        {
            //System.out.println("I = "+i);
            for(int j=0;j<=i;j++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
    
}
