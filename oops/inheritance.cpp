#include<iostream>
using namespace std;

class car{
    public:
    string com="bmw";
    void run()
    {
        cout<<" car has started";
    }
};

class mycar:public car{
    public:
        string gadi="xseries";
};

int main()
{
    mycar c;
    cout<<c.gadi;
    c.run();  //inherited class can access the methods of the parent class 
    cout<<endl<<c.com; //inherited classes can access the public memebers of the base class

}