#include<iostream>
using namespace std;

int binarySearch(int a[],int n ,int num)
{
    int s=0;     //starting point
    int e=n;      //ending point
    int mid;    //mid point

    //10 20 30 40 50

    while(s<=e)     //if s is greater then e then element is not there
    {
        mid=(s+e)/2;
        if(a[mid]==num)
        {
            return mid;
        }else if(a[mid]>num) {
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return -1;
}

int main()
{
    int n;
    int a[100];
    int num;

    cout<<"enter the number of elements ";
    cin>>n;
    
    cout<<"enter array elements ";

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the element to be searched ";
    cin>>num;

     cout<<"element is found in " << binarySearch(a,n,num)<<endl;
}