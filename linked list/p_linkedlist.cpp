#include<bits/stdc++.h>
using namespace std;


class node{
public:
    int data;
    int key;
    node* next;

    node()
    {
        data=0;
        key=0;
        next=NULL;
    }
    node(int k,int d)
    {
        data=d;
        key=k;
    }
};

class singlelist{
public:
    node* head;
    singlelist()
    {
        head=NULL;
    }
    singlelist(node *h)
    {
        head=h;
    }

    node* nodeexist(int k)
    {
        node* temp=NULL;
        node* ptr = head;

        while(ptr!=NULL)
        {
            if(ptr->key==k)
            {
                temp=ptr;
            }
            ptr=ptr->next;
        }
        return temp;
    }



//1. Append Node?/
    void appendnode(node *n)
    {
        if(nodeexist(n->key)!=NULL)
        {
            cout<<"Cannot append Key exist"<<endl;
        }
        else
        {
            if(head==NULL)
            {
                head=n;
                cout<<"Head Node Appended"<<endl;
            }
            else
            {
                node* ptr;
                ptr=head;
                while(ptr->next!=NULL)
                {
                    ptr=ptr->next;
                }
                ptr->next=n;
                cout<<"Another Node Appended"<<endl;
            }

        }
    }

//2. Prepend Node//
    void prependnode(node *n)
    {
        n->next=head;
        head=n;
    }


//3 Print List//
    void printlist()
    {
        node* ptr;
        ptr=head;
        cout<<"Key  Data"<<endl;
        while(ptr!=NULL)
        {
            cout<<ptr->key<<" "<<ptr->data<<endl;
            ptr=ptr->next;
        }
    }
//4 Delete node by Key//
    void deletenode(int k)
    {
        if(nodeexist(k)!=NULL)
        {
            node* ptr=NULL;
            node* c_ptr=head->next;
            node* p_ptr=head;
            if(head->key==k)
            {
               head= head->next;

            }
            else
            {
                while(c_ptr!=NULL)
                {
                    if(c_ptr->key==k)
                    {
                        p_ptr->next=c_ptr->next;
                        c_ptr=NULL;
                    }
                   else
                   {
                        p_ptr=p_ptr->next;
                        c_ptr=c_ptr->next;
                   }
                }
                cout<<"Deleted"<<endl;
            }

        }
        else
            cout<<"Key is Not Found"<<endl;
    }
//5 Insert node at particular position//
    void insertnode(int k,node* n)
    {
        node* ptr=nodeexist(k);

        if(ptr!=NULL)
        {
            n->next=ptr->next;
            ptr->next=n;
            cout<<"Node Updated"<<endl;
        }
    }
};


int main()
{
    int key1,data1,k1;
    singlelist s;
    int option;
    do
    {
        cout<<"1. Append a node()"<<endl;
        cout<<"2. print list()"<<endl;
        cout<<"3. Prepend a node()"<<endl;
        cout<<"4. Delete node by Key()"<<endl;
        cout<<"5. Insert Node at Particular Position"<<endl;
        cin>>option;
        node* n1=new node();
        switch(option)
        {
            case 0:
                break;
            case 1:
                cout<<"Enter Key & Data"<<endl;
                cin>>key1;
                cin>>data1;
                n1->key=key1;
                n1->data=data1;
                s.appendnode(n1);
                break;
            case 2:
                s.printlist();
                break;
            case 3:
                cout<<"Enter Key & Data"<<endl;
                cin>>key1;
                cin>>data1;
                n1->key=key1;
                n1->data=data1;
                s.prependnode(n1);
                break;
            case 4:
                cin>>key1;
                s.deletenode(key1);
            case 5:
                cout<<"Enter Position"<<endl;
                cin>>k1;
                cout<<"Enter Key & Data"<<endl;
                cin>>key1;
                cin>>data1;
                n1->key=key1;
                n1->data=data1;
                s.insertnode(k1,n1);
        }
    }
    while(option!=0);
}
