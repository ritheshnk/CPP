#include<iostream>
using namespace std;

class employee{
    private:
        string name;
    public:
        employee() //default construtor which get automatically innvoked when objet is created
        {
            name="rithesh";
        }

        void display()
        {
            cout<<"the name is "<<name;
        }

};

int main()
{
    employee e;
    e.display();
}