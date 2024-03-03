
package pattern;

import java.util.Scanner;

/**
 *
 * @author hasan
 */
public class Array {
    public static void main(String[] args) {
        Scanner ob = new Scanner(System.in);
        System.out.println("Enter the size of the Array: ");
        int n=ob.nextInt();
        int[] array=new int[n];
        System.out.println("Enter the array elements: ");
        for(int i=0;i<n;i++)
        {
            array[i]=ob.nextInt();
        }
        
        for(int i=0;i<n;i++)
        {
            System.out.println("The element of the Array : "+i+" th Index = "+array[i]);
        }
    }
}
