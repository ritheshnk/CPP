#include<iostream>
using namespace std;
int main()
{
    int n,a[100];
    cout<<"enter number of elements ";
    cin>>n;

    cout<<endl<<"enter array elelemnts ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"before sorting "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int temp;
            if(a[j]<a[i])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }else{
                continue;
            }
        }
    }
    cout<<"\nafter sorting "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}