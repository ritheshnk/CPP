#include<iostream>
using namespace std;
int main()
{
    int a,b,j,i;

    cout<<"enter the range of between which u need prime number : ";
    cin>>a>>b;
    for( i=a;i<=b;i++)
    {
        for( j=2;j<i;j++)
        {
            if(i%j == 0)
            {
                break;
            }
        }
        if(j==i)
        {
            cout<<i<<" ";
        }
        
    }
}
