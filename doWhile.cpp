#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter only positve number no negative : ";
    cin>>n;
    do{
        cout<<"the number is "<<n<<endl;
        cout<<"enter another number";
        cin>>n;
    }while(n>0);
    return 0;
}