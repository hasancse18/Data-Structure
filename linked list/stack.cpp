#include<bits/stdc++.h>
using namespace std;
class Stack
{
    private:
        int top;
        int ar[5];

    public:
        Stack()
        {
            top=-1;
            for(int i=0;i<5;i++)
            {
                ar[i]=0;
            }
        }

        bool isEmpty()
        {
            if(top==-1)
                return true;
            else
                return false;
        }

        bool isFull()
        {
            if(top==4)
                return true;
            else
                return false;
        }
        void push(int val)
        {
            if(isFull())
            {
                cout<<"Stack Overflow"<<endl;
            }
            else
            {
                top++;
                ar[top]=val;
            }
        }
        int pop()
        {
            if(isEmpty())
            {
                cout<<"Stack Overflow"<<endl;
                return 0;
            }
            else
            {
                int popval=ar[top];
                ar[top]=0;
                top--;
                return popval;
            }
        }

        int Count()
        {
            return top+1;
        }
        int peek(int pos)
        {
            if(isEmpty())
            {
                cout<<"Stack Overflow"<<endl;
                return 0;
            }
            else
            {
                return ar[pos];
            }
        }

        void change(int pos ,int val)
        {
            ar[pos]=val;
            cout<<"Value has been changed"<<endl;
        }

};
int main()
{

}
