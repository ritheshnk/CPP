#include<iostream>
using namespace std;

//base class
class Instrument{
public:
   virtual void playing()
    {
        cout<<"Sudarshan Chakra will finish";
    }

};


//derived class
class weapon:public Instrument{
public:
    void playing()
    {
        cout<<"Thrishul will finish";
    }

};

int main()
{
    // Instrument i;
    // i.playing();

    //we can access sub class using pointer

//base class       derived class
Instrument*  i=new  weapon();
i->playing();
}