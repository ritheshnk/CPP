
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str, sa = "", st = "";
    cout << "enter a string" << endl;
    getline(cin, str);

    int n = str.length();
    int longest = 0;
    int i = 0;

    for (i = 0; i < n; i++)
    {
        if (str[i] == ' ')
        {
            if (longest < sa.length())
            {
                longest = sa.length();
                st = sa;
            }
            sa = "";
        }
        else
        {
            sa += str[i];
        }
    }

    if (longest < sa.length())
    {
        longest = sa.length();
        st = sa;
    }

    cout << "largest word length " << longest;
    cout<<endl<<"word is "<<st;
    return 0;
}