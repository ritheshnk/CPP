#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"enter the range upto which u need to print number which are divisible by 3 : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        if(i%3==0){
            cout<<i<<endl;
        }else{
            continue;
        }
    }
    cout<<"number which are not multiple of 3 are";
    for(int i=1;i<=n;i++){
        if(i%3==0){
            continue;
        }else{
            
            cout<<i<<endl;
        }
    }
}