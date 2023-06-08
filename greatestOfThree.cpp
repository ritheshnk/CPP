#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter 3 numbers: "<<endl;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<a<<" is big";
    }else if(b>a && b>c){
        cout<<b<<" is big";
    }else{
        cout<<c<<"%d is big";
    }
    
}