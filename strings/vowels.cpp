#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"enter a string "<<endl;
    getline(cin,str);

    int count=0;
    int n=str.length();

    for(int i=0;i<n;i++)
    {
        if(str[i]=='a'  || str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u')
        {
            count++;
        }
    }
    cout<<endl<<count;


}