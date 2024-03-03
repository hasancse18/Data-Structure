#include<bits/stdc++.h>
using namespace std;

class complexnumber{
private:
    int real;
    float imaginary;


public:
    complexnumber(){
    }
    complexnumber(int r,float i)
    {
        real=r;
        imaginary=i;
    }
    void display()
    {
        cout<<"Complex Number is: "<<real<<" + "<<imaginary<<"i "<<endl;

    }
    int getreal()
    {
        return real;
    }
    int getimagin()
    {
        return imaginary;
    }
};

complexnumber add2number(complexnumber n1,complexnumber n2)
{
    int r;
    float i;
    r=n1.getreal()+n2.getreal();
    i=n1.getimagin()+n2.getimagin();
    complexnumber temp(r,i);
    return temp;
}


int main()
{
   complexnumber ob1(5,6),ob2(1,2),ob3;
   ob3=add2number(ob1,ob2);
   //ob3.display();
   complexnumber *ptr;
   ptr=&ob3;
   ptr->display();
}
