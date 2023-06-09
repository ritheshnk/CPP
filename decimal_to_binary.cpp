#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,rem;
    vector <int> a;
    cout<<"enter number "<<endl;
    cin>>n;

    while(n>0)
    {
        a.push_back(n%2);
        n=n/2;
    }

    for(int i=a.size()-1;i>=0;--i)
    {
        cout<<a.at(i);
    }


}