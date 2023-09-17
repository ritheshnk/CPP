#include<iostream>
#include<string>
using namespace std;

class binary{
    private:
        string s;
    public:
        void read(void);
        void check_bin(void);
};

void binary ::read(void)
{
    cout<<"enter a binary number"<<endl;
    cin>>s;
}

void binary :: check_bin(void)
{
    for(int i=0 ;i<s.length();i++)
    {
        if(s.at(i) !='0' && s.at(i) !='1')
        {
            cout<<endl<<"not a binary";
            exit(0);
        }else{
            continue;
        }
    }
}

int main()
{
    binary b;
    b.read();
    b.check_bin();
}