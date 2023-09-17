//print the maximum number in an array as it parses

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    int a[100];
    int mx=-1999;

    cout<<"enter the number of elements "<<endl;
    cin>>n;
    cout<<endl<<"enter array elements ";
    for(int i=0;i<n;i++)
    {
        
        cin>>a[i];
    }

    cout<<"the array elements are ";
     for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"the array elelmntss in max order "
    <<endl;

    for(int i=0;i<n;i++)
    {
        mx=max(mx,a[i]);
        cout<<mx<< " ";
    }


}