#include<iostream>
using namespace std;
int main()
{
    int n;
    int num;
    int a[100];

    cout<<"enter the number of elements ";
    cin>>n;
    cout<<endl;
    cout<<"enter array elements ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

    cout<<"enter the element to be searched i know its dumb to check\n if the number is present or not even after pushing elemts to array ";
    cin>>num;

    for(int i=0;i<n;i++)
    {
        if(num==a[i])
        {
            cout<<num<<" is found in "<<i;
        } else{
            continue;
        }
    }

}