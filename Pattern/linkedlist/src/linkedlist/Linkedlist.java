/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package linkedlist;

/**
 *
 * @author hasan
 */
public  class Linkedlist {
   

    static class Node{
        int data;
        Node next;
        
        Node(int data)
        {
            this.data=data;
            this.next=null;
        }
    }
    
   public static class MyList{
        Node head;
        public void addFirst(int data)
    {
        Node node=new Node(data);
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
    
    public void addLast(int data)
    {
        Node node=head;
        Node newNode=new Node(data);
        if(node==null)
        {
            head=newNode;
        }
        else
        {
            while(node.next!=null)
            {
                node=node.next;
            }
            node.next=newNode;
        }
    }
    
    
    public void removeFirst()
    {
        if(head==null)
        {
            System.out.println("The List is Empty ");
            return;
        }
        head=this.head.next;
    }
    
    public void removeLast()
    {
        Node first=head;
        //Node second=first.next;
        if(head==null)
        {
            System.out.println("The list is Empty..");
            return;
        }
        if(head.next==null)
        {
            head=null;
            return;
        }
        while(first.next.next!=null)
        {
            
            first=first.next;
        }
        first.next=null;
        
    }
    
    public void insertMiddle(int i)
    {
        Node node =head;
        Node temp;
        int p=i-1;
        while(p>0)
        {
            node=node.next;
            p--;
        }
        Node curr=new Node(100);
        curr.next=node.next;
        node.next=curr;
        
        
        
        
    }
    
    public void removeGreater()
    {
        while(head.data>=25)
        {
            head=head.next;
        }
        Node current=head;
        Node prev=head;
        
        while(current!=null)
        {
            if(current.data>=25)
            {
                prev.next=current.next;
            }
            else
            {
                prev=current;
            }
            
            
            current=current.next;
        }
        
    }
    
    public void reverseList()
    {
        Node prev=head;
        Node curr=head.next;
        
        while(curr!=null)
        {
            Node Next=curr.next;
            
            curr.next=prev;
            
            prev=curr;
            curr=Next;
            
            
        }
        
        head.next=null;
        head=prev;
    }
    public void printList()
    {
        Node node=head;
        while(node!=null)
        {
            System.out.print(node.data+" ");
            node=node.next;
        }
        System.out.println();
    }
    
   }
    
    public static void main(String[] args) {
        // TODO code application logic here
        MyList list=new MyList();
        for(int i=1;i<=50;i++)
        {
            list.addLast(i);
        }
        //list.insertMiddle(10);
        list.printList();
        //list.removeGreater();
        //list.printList();
        list.reverseList();
        list.printList();
        
        
    }
    
}
