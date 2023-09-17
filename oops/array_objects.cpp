#include<iostream>
using namespace std;

class Employee {
    private:
    int id, salary=100;
    public:
        void setid(void);
        void getid(void);
};

void Employee :: setid(void)
{
    cout<<endl<<"enter the id of the employee "<<endl;
    cin>>id;
}

void Employee::getid(void)
{
    cout<<endl<<"the salary of employee id no "<<id<<" is "<<salary<<endl; 
}

int main()
{
    Employee rnk[5];

    for (int i = 0; i < 5; i++)
    {
        rnk[i].setid();
        rnk[i].getid();

    }
     
}