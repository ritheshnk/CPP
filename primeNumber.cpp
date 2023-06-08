#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    cout<<endl;

    for(int i=2;i<(n/2);i++)
    {
        if(n%i==0)
        {
            cout<<n<<" is not a prime number";
        }else{
            cout<<n<<" is a prime number";
        }
    }
}