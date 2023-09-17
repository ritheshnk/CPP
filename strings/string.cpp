#include<iostream>
#include<string>

using namespace std;

int main()
{
    // Types of string decleration


    //way 1;

    //cannot take full sentence as input
    
    // string str;
    // cin>>str;
    // cout<<endl;
    // cout<<str;

    

    //way 2

    //string is datatype str1(size of string or  how many times to print, whats the content (rember only one charatcer) );

    // string str1(7,'h');

    // cout<<str1<<endl;


    //way 3

    //we can take full sentence as input

    string str2;

    getline(cin,str2);
    cout<<str2;

}