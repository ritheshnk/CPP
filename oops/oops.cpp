//classes and objects 

#include<iostream>
using namespace std;


class Employee{
    public:
    string name;
    string company;
    int age;

    void introduce(){
        cout<<"My name is "<<name<<endl<<"i work in -"<<company<<endl<<"my age is "<<age<<endl;
    }
};


int main()
{
    Employee emp;

    emp.name="Rithesh";
    emp.company="XYZ";
    emp.age=21;
    emp.introduce();

     Employee emp2;

    emp.name="Narayan";
    emp.company="vaikunta";
    emp.age=9999;
    emp.introduce();

    


}