#include<iostream>
#include<string>
using namespace std;


void Replace(string& sentence,string word,string replace) //string& means reference to original string so that changes can be shown
{
    int m,n,o;
    m=sentence.length();
    n=word.length();
    o=replace.length();

    for(int i=0;i<m;i++)
    {
        if(sentence.substr(i,n)==word)
        {
            sentence=sentence.replace(i,n,replace);
        }else{
            continue;
        }
    }
}
int main()
{
    string sentence,word,replace;
    cout<<"enter the string "<<endl;
    getline(cin,sentence);
    cout<<endl<<"enter the word which you wanyt to replace ";
    cin>>word;
    cout<<endl<<"enter the replace word ";
    cin>>replace;
    Replace(sentence,word,replace);
    cout<<endl<<sentence;
}