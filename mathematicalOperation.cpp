#include<iostream>
using namespace std;
 int main()
 {
     int a,b,choice;
     
     cout<<"enter the value of a"<<endl;
     cin>>a;
     cout<<"enter the value of b"<<endl;
     cin>>b;
     cout<<"choose 1 for + "<<endl<<"choose 2 for -  "<<endl<<"choose 3 for *"<<endl<<"choose 4 dor /"<<endl;
     cout<<"enter your choice"<<endl;
     cin>>choice;
     
     switch(choice)
     {
         case 1:cout<<"the value of a + b is = "<<a+b<<endl;
                break;
                
         case 2:cout<<"the value of a - b is = "<<a-b<<endl;
                break;
                
         case 3:cout<<"the value of a * b is = "<<a*b<<endl;
                break;
                
         case 4:cout<<"the value of a / b is = "<<a/b<<endl;
                break;
        default:cout<<"invalid choice";
     }
 }
