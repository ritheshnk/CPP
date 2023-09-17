#include<iostream>
using namespace std;

class single{
    int data1;
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
};

void single :: setData(void)
{
    data1=10;
    data2=20;
}

int single ::  getData1(void)
{
    return data1;
}

int single::getData2(void)
{
    return data2;
}

class derived : public single{
    public:
        int data3;
        void process();
        void display();
};

void derived::process(void)
{
    data3=data2 * getData1();
}

void derived::display(void)
{
    cout<<"the value of data 1 is "<<getData1();// here we used get data cause data1 is private
    cout<<endl<<"the value of data 2 is "<<data2;
    cout<<endl<<"the value of data 3 is "<<data3;
}

int main()
{
    derived dr;
    dr.setData();
    dr.getData1();
    dr.getData2();
    dr.process();
    dr.display();
}