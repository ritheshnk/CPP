#include<iostream>
using namespace std;

int main()
{
    int n;
    int a[100];

    a[n+1];
    a[n]=-1; 
   

    cout<<"enter the number of elements "<<endl;
    cin>>n;
    cout<<endl<<"enter array elements ";
    for(int i=0;i<n;i++)
    {
        
        cin>>a[i];
    }

    if(n==1)
    {
        cout<<"1";
        return 0;
    }

    int ans=0;
    int mx=-1;

    for(int i=0;i<n;i++)
    {
        if(a[i]>mx && a[i]>a[i+1])
        {
            ans++;
        }
        mx=max(mx,a[i]);
    }
    cout<<ans;
}    
