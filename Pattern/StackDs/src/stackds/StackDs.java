/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package stackds;

/**
 *
 * @author hasan
 */
public class StackDs {

    public static class Node{
        int data;
        Node next;
        Node(int data)
        {
            this.data=data;
            next=null;
        }
    }
    
    public static class Stacks{
        Node head=null;
        public void push(int data){
            Node node =new Node(data);
            if(head==null)
            {
                head=node;
            }
            else
            {
                node.next=head;
                head=node;
            }
        }
        boolean isEmpty()
        {
            return head==null;
        }
        
        public int peek()
        {
            if(isEmpty())
            {
                return -1;
            }
            return head.data;
        }
        public int pop()
        {
            if(isEmpty())
            {
                return -1;
            }
            int d=head.data;
            head=head.next;
            return d;
        }
    }
    public static void main(String[] args) {
        // TODO code application logic here
        
        Stacks list = new Stacks();
        
        for(int i=1;i<5;i++)
        {
            list.push(i);
        }
        while(!list.isEmpty())
        {
            System.out.println(list.pop());
        }
    }
    
}
