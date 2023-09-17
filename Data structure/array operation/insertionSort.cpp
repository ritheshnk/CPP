#include<iostream>
using namespace std;

int main()
{
    int n;
    int a[100];

    cout<<"enter the number of ele "<<endl;
    cin>>n;
    cout<<"enter array ele ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }

    cout<<"array ele before sorting";

      for(int i=0;i<n;i++)
    {
        cout<<a[i] <<" ";

    }

    for(int i=1; i<n;i++)
    {
        int current =a[i];
        int j=i-1;

        while(a[j]>current && j>=0)
        {
            a[j]=a[j+1];
            j--;
        }
       a[j+1]==current; 
    }

cout<<"array ele after sorting";

      for(int i=0;i<n;i++)
    {
        cout<<a[i] <<" ";

    }
} 


