#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int key;
    int data;
    node* next;

    node()
    {
        key=0;
        data=0;
        next=NULL;
    }
    node(int k,int d)
    {
        key=k;
        data=d;
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
// 1. check whether the node is exist or not//
    node* nodeexist(int k)
    {
        node* temp=NULL;
        node* ptr=head;

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

// 2.append a node//

    void appendnode(node *n)
    {
        if(nodeexist(n->key)!=NULL)
        {
           cout<<"Already exist"<<endl;
        }
        else
        {
            if(head==NULL)
            {
                head=n;
                cout<<"Node Appended"<<endl;
            }
            else
            {
                node* ptr=head;
                while(ptr->next!=NULL)
                {
                    ptr=ptr->next;
                }
                ptr->next=n;
            }
        }
    }
//3. Prepend node - Attach a node at first   //

    void prependnode(node* n)
    {
        if(nodeexist(n->key)!=NULL)
            cout<<"Node already exist"<<endl;
        else
        {
            n->next=head;
            head=n;
            cout<<"Node Appended"<<endl;
        }
    }
//4. Inserting Node at particular position//
    void insertnodeafter(int k,node* n)
    {
        node* ptr=nodeexist(k);
        if(ptr==NULL)
            cout<<"Position does not exist with key value "<<k<<endl;
        else
        {
            if(nodeexist(n->key)!=NULL)
                cout<<"Node already exist with key value"<<endl;
            else
            {
                n->next=ptr->next;
                ptr->next=n;
            }
        }



    }
//5. Delete Node At particular position//
    void deletenode(int k)
    {
        if(head==NULL)
        {
            cout<<"Create Linked list first"<<endl;
        }
        else if(head!=NULL)
        {
            if(head->key==k)
                {
                    head=head->next;
                    cout<<"Node is deleted"<<endl;
                }
            else
            {
                node* c_point=head->next;
                node* p_point=head;
                node* temp=NULL;

                while(c_point!=NULL)
                {
                    if(c_point->key==k)
                    {
                        temp=c_point;
                        c_point=NULL;
                    }
                    else
                    {
                        c_point=c_point->next;
                        p_point=p_point->next;
                    }
                }
                if(temp!=NULL)
                {
                    p_point->next=temp->next;
                    cout<<"Node is deleted"<<endl;
                }
                else
                {
                    cout<<"Node is not found"<<endl;
                }
            }
        }
    }

//6 Update Node At Particular Position//

    void updatenode(int k,int d)
    {
        node* ptr=nodeexist(k);
        if(ptr!=NULL)
        {
            ptr->data=d;
            cout<<"Data is Updated"<<endl;
        }
        else
        {
            cout<<"The Key is not Found"<<endl;
        }
    }

// 7 Print Link List//

    void printlist()
    {
        node* temp=head;

        cout<<"The Linked List Are"<<endl;

        while(temp!=NULL)
        {
            cout<<temp->key<<"  "<<temp->data<<endl;
            temp=temp->next;
        }

    }

};


int main()
{
    int key1,k,data1;
    int option;
    singlelist s;

    do
    {
        cout<<"1. Append a node()"<<endl;
        cout<<"2. Prepend node - Attach a node at first"<<endl;
        cout<<"3. Inserting Node at particular position"<<endl;
        cout<<"4. Delete node by key()"<<endl;
        cout<<"5. Update Node by key()"<<endl;
        cout<<"6. Print()"<<endl;
        cout<<"7. Clear Screen"<<endl;
        cin>>option;

        node* n1=new node();

        switch(option)
        {
            case 0:
                break;
            case 1:
                cout<<"Append Node"<<endl;
                cin>>key1;
                cin>>data1;
                n1->key=key1;
                n1->data=data1;
                s.appendnode(n1);
                break;
            case 2:
                cout<<"Prepend node"<<endl;
                cin>>key1;
                cin>>data1;
                n1->key=key1;
                n1->data=data1;
                s.prependnode(n1);
                break;
             case 3:
                cout<<"Insert Node at particular position"<<endl;
                cout<<"Key ";
                cin>>key1;
                cout<<endl<<"Data ";
                cin>>data1;
                cout<<endl<<"Position ";
                cin>>k;
                n1->key=key1;
                n1->data=data1;
                s.insertnodeafter(k,n1);
                break;
            case 4:
                cout<<"Delete node by key"<<endl;
                cout<<"Key ";
                cin>>k;
                s.deletenode(k);
                break;
            case 5:
                cout<<"Update Node At Particular Position"<<endl;
                cout<<endl<<"Data ";
                cin>>data1;
                cout<<endl<<"Position ";
                cin>>k;
                s.updatenode(k,data1);
                break;
            case 6:
                s.printlist();
                break;
            case 7:
                system("cls");
                break;
        }

    }
    while(option!=0);
}
