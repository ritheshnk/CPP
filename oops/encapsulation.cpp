#include<iostream>
using namespace std;

class Employee{
private:
    string Name;
    string Company;
    int Age;
public:

    void setName(string name)
    {
        Name=name;
    }
    string getName()
    {
        return Name;
    }

    void setCompany(string company) 
    {
        Company=company;
    }

    string getCompany()
    {
        return Company;
    }

    void setAge(int age)
    {
        if(age >= 18)  //applying validation rule
        {
            Age=age;

        }
    }

    int getAge()
    {
        return Age;
    }

    Employee(string name,string company,int age)
    {
        Name=name;
        Company=company;
        Age=age;
    }

    void display()
    {
        cout<<"the name is "<<Name<<" the company name is "<<Company<<" the age is "<<Age<<endl;
    }
};

int main()
{
    Employee emp=Employee("rithesh","XYZ",23);
    emp.display();
    
    emp.setAge(52);
    //emp.getName("Narayan");
    emp.display();
    emp.setAge(12);
    emp.display();
    cout<<endl<<emp.getName()<< " is "<< emp.getAge()<<" years old";

}