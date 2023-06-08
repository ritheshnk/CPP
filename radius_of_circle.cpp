#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double r;
    const double pi=3.14;
    // float a=3.2f; //float variable
    auto c=3.2f;
    int b=4;
    int i{b};
    int j=b;
    
    cout<<"enter the radius of circle"<<endl;
    cin>>r;

    double area=pi*pow(r,2);

    cout<<endl<<"area of a circle is "<<area;
    cout<<endl<<"the value of i is "<<i;
    cout<<endl<<"the value of j is "<<j;
    
}