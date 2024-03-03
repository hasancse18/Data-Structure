/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pattern.String;

import java.util.*;

/**
 *
 * @author hasan
 */
public class Strings {
    public static void main(String[] args) {
        String str="My name is Md hasan ali";
        Scanner sc = new Scanner(System.in);
        //System.out.print("Enter the String: ");
        //str = sc.nextLine();
        String s=str.substring(2,5);
        System.out.println(s);
        
        StringBuilder sb = new StringBuilder();
        sb.append(str);
        System.out.println(sb.charAt(5));
        sb.delete(20,str.length());
        System.out.println(sb);
        sb.append("ali");
        System.out.println(sb);
        
        
    }
    
}
