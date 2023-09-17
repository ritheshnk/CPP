#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
        void setData(int v1,int v2)
        {
            a=v1;
            b=v2;

        }

        friend complex sum(complex c1,complex c2);

        void display()
        {
            cout<<"the sum is "<<a<<"+i"<<b<<endl;
        }

};

complex sum(complex c1,complex c2)
{
    complex c3;
    c3.setData((c1.a+c2.a),(c1.b+c2.b));
    c3.display();

    return c3;
    
}

int main()
{
    complex c1,c2;
    c1.setData(1,2);
    c2.setData(2,3);
    sum(c1,c2);
}
/*
1.Friend function is not the part of class
2.It can access private members and methods in other classes
3.usually contains objects as arguments to access private members
4.frind keyword can be decelared in priivate or public section of the class 
5.it cannot acces the variable directly of the class it can be accessed only by 
object_name.member_name ie a+b is wrong o1.a+o1.b si correct 
*/