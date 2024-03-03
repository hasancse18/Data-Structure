#include<bits/stdc++.h>
using namespace std;

class car{
private:
    string comp_name;
    string model_name;
    string fuel_type;
    double mileage;
    double price;

public:
    car()
    {
        cout<<"Default Constructor"<<endl;
    }
    car(string cname, string mname,string type,double m,double p)
    {
        cout<<"Parameterized constructor"<<endl;
        comp_name=cname;
        model_name=mname;
        fuel_type=type;
        mileage=m;
        price=p;
    }
    car(car &ob) //copy constructor declare method
    {
        cout<<"Copy Constructor"<<endl;
        comp_name=ob.comp_name;
        model_name=ob.model_name;
        fuel_type=ob.fuel_type;
        mileage=ob.mileage;
        price=ob.price;
    }

    void setData(string cname, string mname,string type,double m,double p)
    {
        comp_name=cname;
        model_name=mname;
        fuel_type=type;
        mileage=m;
        price=p;
    }

    void display()
    {
        cout<<"Cars Property : "<<endl;
        cout<<"Company name : "<<comp_name<<endl;
        cout<<"model name : "<<model_name<<endl;
        cout<<"Fuel Type : "<<fuel_type<<endl;
        cout<<"Mileage : "<<mileage<<endl;
        cout<<"Price : "<<price<<endl;


    }
    ~car()
    {
        cout<<"Destructor called"<<endl;
    }

};

int main()
{
    car ob;
    ob.setData("Honda","CBR","Petrol",72,11000);
    ob.display();
    car ob2("Honda","CBR","Petrol",72,11000);
    ob2.display();
    car ob3=ob2;//copy constructor called
    ob3.display();
}
