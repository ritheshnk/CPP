//print sum of all subarray of an array

#include<iostream>
using namespace std;

int main()
{
    int n;
    int a[100];

    cout<<"enter number of elements ";
    cin>>n;
    cout<<endl;
    cout<<"enter array elelemnts ";
    for(int i=0;i<n;i++)
    {

        cin>>a[i];
    }

    cout<<"array elements are ";
     for(int i=0;i<n;i++)
    {

        cout<<a[i]<<" ";
    }

    int sum=0;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            sum=sum+a[j];

            cout<<sum<<" ";
        }   
    }
}