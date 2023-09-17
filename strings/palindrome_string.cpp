#include<iostream>
using namespace std;

int main()
{
    string a;
    int n;

    cout<<"enterr the length of the string "<<endl;
    cin>>n;
    cout<<"enter a string "<<endl;
    cin>>a;
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }

    string b;
    b=a;
    bool pal=true;
     for(int i=0;i<n;i++)
    {
        if(a[i]==b[n-i-1])
        {
            pal = true;
            continue;
        }else{
            pal=false;
            exit;
        }
    }

    if(pal==true)
    {
        cout<<" string is palindrome "<<endl;
    }else{
        cout<<" not palindrome"<<endl;
    }
}