#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0)); //seed rand
    int num=rand() %(6-1+1)+1;   //6 is max value and 1 is mini value

    cout<<num;
}
