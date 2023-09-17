#include<iostream>
using namespace std;

int main()
{
    int n;
    int a[100];

    cout<<"enter the no of elements ";
    cin>>n;
    cout<<endl<<"enter array elements "<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int count=1; //we create count cause we only loop till (n-count) times
    while(count<n) //count should be less than n 
    {
        for(int i=0;i<n-count;i++)
        {
            if(a[i]>a[i+1])
            {
                int temp;
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        count++;
    }

    cout<<"the elements are "<<endl;
    {
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
}