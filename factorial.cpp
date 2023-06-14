#include<iostream>
using namespace std;

int fact(int n)
{
    int fact=1;
    for(int i=2; i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int main()
{
    int n;
    cout<<"enter a number ";
    cin>>n;

    int factorial=fact(n);  //will store the value of fact in variable so that it is easy to print
    cout<<factorial;
}
