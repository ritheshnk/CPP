#include<iostream>
using namespace std;

bool isprime(int a)
{
    for(int j=2;j<=(a/2);j++)
    {
        if((a%j) == 0)
        {
            return false; //num is prime num
        }
    }

    return true; //if the loop is completed then the num is not a prime num cuase itsnot divisible 
}


int main()
{
    int a,b;
    cin>>a>>b;

    for(int i=a;i<=b;i++)
    {
        if(isprime(i))
        {
            cout<<i<<endl;
        }
    } 
}
