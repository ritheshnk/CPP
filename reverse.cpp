#include<iostream>
using namespace std;

int main()
{
    int n,rem,rev=0;
    
    cout<<"enter number ";
    cin>>n;
    int temp=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    cout<<"the reverse of  number is "<<rev;
     
     if(rev==temp)
     {
        cout<<endl<<"the number is palindrome";
     }else{
        cout<<endl<<"the number is not a palindrome";
     }


}