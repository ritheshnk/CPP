#include<iostream>
using namespace std;

int main()

{
    string s1,s2,s3,s4,s5,s6;
    s1="computer";
    s2="science";
    s3="fam";
    s4="ily";

    s1.append(s2);
    s3.append(s4);
    cout<<s1;
    cout<<endl;
    cout<<s3;

    s5="Rithesh is";
    s6=" great";
    s5=s5+s6;
    cout<<endl<<s5;
    cout<<endl<<s1[1];
}