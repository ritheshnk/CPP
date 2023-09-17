#include<iostream>
using namespace std;

int main()
{
    string a;
    int n;
    cout<<"enter the length of the string "<<endl;
    cin>>n;

    cout<<"enter the string "<<endl;
    cin>>a;
    cout<<"the string in reverse order is "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[n-i-1];
    }
}