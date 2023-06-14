#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,rem,sum=0;
    
    cout<<"enter the number ";
    cin>>n;
    int temp=n;
    while(n>0)
    {
        rem =n%10;
        // sum=sum+pow(rem,3);
        sum=sum+(rem*rem*rem);
        n=n/10;
    }

    if(sum==temp)
    {
        cout<<endl<<"Armstrong number";
    }else{
        cout<<endl<<" not Armstrong number";
    }
}