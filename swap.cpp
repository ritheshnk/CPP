#include<iostream>
using namespace std;


void swap(int *a,int *b){
*a=*a+*b;
*b=*a-*b;
*a=*a-*b;
}
int main(){
int a,b;
cout<<"enter the value of  a and b"<<endl;
cin>>a>>b;

cout<<"before swapping the value of a is "<<a<<endl;;
cout<<"before swapping the value of b is "<<b<<endl;

swap(&a,&b);

cout<<"after swapping the value of a is "<<a<<endl;
cout<<"after swapping the value of b is "<<b<<endl;
}

