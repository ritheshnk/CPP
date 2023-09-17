#include<iostream>
using namespace std;


class employee{
    private:
        int sal;
        int bonus;
    public:
        string name;
        string status;

        void setData(int Sal,int Bonus); //Declaratio of function

        void display(){
            cout<<"the salary of employee is "<<sal;
            cout<<endl<<"the bonus of employee is "<<bonus;
            cout<<endl<<"the name of the employee is "<<name;
            cout<<endl<<"marriage status of "<<name<<"is "<<status;

        }

};

void employee::setData(int Sal,int Bonus)
{
    sal=Sal;
    bonus=Bonus;

}

int main(){
    employee harry;
    harry.setData(5000,200);
    harry.name="Rithesh";
    harry.status="single";
    harry.display();
}