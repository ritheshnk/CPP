#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the number upto which sum is need : "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }

    cout<<"the sum upto to n is : "<<sum;
}