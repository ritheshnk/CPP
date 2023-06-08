#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter the value for two numbers "<<endl;
    cin>>a>>b;
    cout<<"Select 1 for addition"<<endl<<"Select 2 for subraction"<<endl<<"Select 3 for multiplication"<<endl<<"Select 4 for divition"<<endl;
    int choice;
    cout<<"Enter your choice : ";
    cin>>choice;

    switch(choice)
    {
        case 1: cout<<a+b;
                break;
        case 2: cout<<a-b;
                break;
        case 3: cout<<a*b;
                break;
        case 4: cout<<a/b;
                break;
        default: cout<<endl<<"Invalid choice"; 

    }
}