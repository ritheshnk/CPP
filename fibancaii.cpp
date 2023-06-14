#include<iostream>
using namespace std;

void fib(int n)
{
    int x1=0;
    int x2=1;
    int nextTerm;

    for(int i=1; i<=n;i++)
    {
        cout<<x1<<endl;
        nextTerm=x1+x2;
        x1=x2;
        x2=nextTerm;
    }
    return;
}

int main()
{
    int n;
    cout<<"enter the number ";
    cin>>n;

    fib(n);
}