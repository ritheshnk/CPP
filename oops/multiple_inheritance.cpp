//sum of two numbers using classes and objects;

#include<iostream>
using namespace std;

class base1{
    public:
        int num1;
        void setBase1(int b1)
        {
            num1=b1;
        }

        void display()
        {
            cout<<"the value of num1 is "<<num1<<endl;

        }
};

class base2{
    public:
        int num2;
        void setBase2(int b2)
        {
            num2=b2;
        }

        void display()
        {
            cout<<"the value of num1 is "<<num2<<endl;

        }
};

class derived:public base1,public base2{
    public:
        int res;
        void display()
        {
            cout<<"the sum of num1 and num2 is "<<num1+num2<<endl;
        }
};

int main()
{
    derived d;
    d.setBase1(5);
    d.setBase2(20);
    d.display();
}