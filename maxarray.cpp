#include<iostream>
// #define INT_MIN (-2147483647 - 1)
// #define INT_MAX 2147483647
#include<climits>
using namespace std;

int main()
{
    int n;
    int a[100];
    cout<<"enter number of elements ";
    cin>>n;
    cout<<endl<<"enter array elements ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int max=INT_MIN;
    int min=INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }

        if(a[i]<min)
        {
            min=a[i];
        }
        
    }

    cout<<endl<<"max element is  "<<max;
    cout<<endl<<"min element is  "<<min;
    
}