//program to find maximum number of number that we can get that are in AP in an array 
//google kickstart
#include<iostream>
using namespace std;

int main()
{
    int n;
    int a[100];
   

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

    int ans=2;
    int curr=2;
    int pd =a[1]-a[0];
    int j=2;

    while(j<n)
    {
        if(pd==a[j]-a[j-1])
        {
            curr++;
        }else{
            pd=a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }

    cout<<ans;

    
}