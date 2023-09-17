#include<iostream>
using namespace std;

class complex{
    private:
        int a,b;
    public:
        complex(int x,int y)
        {
            a=x;
            b=y;
        }

         complex(int x) //Constructor overloading same constructor performs diffrent task depending on the argument
        {
            a=x;
            b=0;
        }

         complex()  //defualt construtor
        {
            a=0;
            b=0;
        }

        void display()
        {
            cout<<a<<" + "<<b<<"i"<<endl;
        }  //displaying 

};


int main()
{
    complex c1(4,5);
    c1.display();

    complex c2(4);
    c2.display();

    // complex c3();
    // c3.display();
}