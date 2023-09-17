#include<iostream>
using namespace std;

int count=0;
class num{
    public:
        num()
        {
            count++;
            cout<<"this is time when constructor is called for object number "<<count<<endl;
        }

        ~num()
        {
            cout<<"this is the time when destructor is called for the object number  "<<count;
            count--;
        }

};

int main()
{
    cout<<"we are inside main function "<<endl;
    cout<<"Creating two objects ";
    num n1;
    {
        cout<<"entering this block"<<endl;
        cout<<"creating two more objects "<<endl;
        num n2,n3;
        cout<<"exiting the block"<<endl;

    } 
    cout<<"back to main"<<endl;

}
//as soon as the complier gets to know the object is not getting used it will destroy the object