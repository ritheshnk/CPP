#include<iostream>
using namespace std;

class complex{

int a,b;
    public:
        complex(int ,int);

        void display(void)
        {
            cout<<a<<"+i"<<b;
        }

};

complex::complex(int x, int y)
{
    a=x;
    b=y;
}

int main()
{
    complex c(4,5); //Implicit function call
    c.display();
    complex g= complex(5,6); //explicit function call
    
}