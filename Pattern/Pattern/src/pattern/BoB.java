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
public class BoB {
    public static void main(String[] args) {
        int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<2*(n-i);j++)
        {
            System.out.print(" ");
        }
        for(int j=i;j>=1;j--)
        {
            System.out.print(j+" ");
        }
        for(int j=2;j<=i;j++)
        {
            System.out.print(j+" ");
        }
        System.out.println();
    }
     for(int i=n;i>=1;i--)
    {
        for(int j=0;j<2*(n-i);j++)
        {
            System.out.print(" ");
        }
        for(int j=i;j>=1;j--)
        {
            System.out.print(j+" ");
        }
        for(int j=2;j<=i;j++)
        {
            System.out.print(j+" ");
        }
        System.out.println();
    }
    }
}
