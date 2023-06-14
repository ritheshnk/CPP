
#include<iostream>
using namespace std;

/*
nCr = n!/(n-r)! * n!

*/

int fact(int n)
{
    if(n==0)
    {
        return 1;
    } else if(n==1)
    {
        return 1;

    }else{
        return n * fact(n-1);
    }
}

int main()
{
    int n,r;
    cout<<"enter the value of n and r ";
    cin>>n>>r;

    int ans= fact(n)/(fact(r)*fact(n-r));

    cout<<endl<<"the value of nCr is "<<ans;

}