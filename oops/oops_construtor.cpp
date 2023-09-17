#include<iostream>
using namespace std;

class Employee{
public:
    string Name;
    string Company;
    int Age;

    Employee(string name, string company, int age)
    {
        Name=name;
        Company=company;
        Age=age;
    }

    void display()
    {
        cout<<"the name is "<<Name<<endl<<"the company name is "<<Company<<" the age is "<<Age<<endl;

    }
};

int main()
{
    Employee emp=Employee("Rithesh","XYZ",21);
    emp.display();

    Employee emp2("Sri Hari","XYZ",999);
    emp2.display();

}