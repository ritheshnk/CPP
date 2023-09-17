#include<iostream>
using namespace std;

class binary{
    private:
        string s;
    public:
        void read(void);
        void Xor(void);
        void display(void);
};

void binary :: read(void)
{
    cout<<"enter a binary number "<<endl;
    cin>>s;
}

void binary :: Xor(void)
{
    for(int i=0; i<s.length(); i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
            else if(s.at(i) == '1')
        {
            s.at(i)='0';
        }
    }
}
// void binary::Xor(void)
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] == '0')
//         {
//             s[i] = '1';
//         }
//         else if (s[i] == '1')
//         {
//             s[i] = '0';
//         }
//     }
// }

void binary ::display(void)
{
    for(int  i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
}

int main()
{
    binary b;
    b.read();
    b.Xor();
    b.display();
}