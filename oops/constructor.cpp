#include<iostream>
using namespace std;

class Employee{
    private:
        string name;
    public:
        Employee(void); //declaration of constructor function
        
        void display(void)
        {
            cout<<"the name of the emplyee is :"<<name;
        }
};

Employee::Employee(void)  //this is a default constructor as it has no parameter
{
    name="Rithesh";
}

int main()
{
    Employee e;
    e.display();

}