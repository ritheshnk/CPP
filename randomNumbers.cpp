#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0)); //we can generate random num using time function in cpp
    int num=rand();
    cout<<num<<endl;
    // cout<<"random number btw 0-9";
    int number=rand() %10;
    cout<<number;
    return 0;
}