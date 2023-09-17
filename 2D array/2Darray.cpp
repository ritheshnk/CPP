#include<iostream>
using namespace std;

int main()
{
    int n,m;
    int i,j;
    int a[100][100];

    cout<<"enter the number of rows and coloumns ";
    cin>>n>>m;
    cout<<endl;
    cout<<"enter array elements ";
    cout<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }

        cout<<endl;
    }
    cout<<"elements are ";
    cout<<endl;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }

        cout<<endl;
    }

    int x;
    bool flag=false;
    cout<<"enter ele to be seatrched ";
    cin>>x;
    cout<<endl;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]==x)
            {
                cout<<i<<" "<<j;
                flag=true;
            }
        }
    }

    if(flag)
    {
        cout<<endl<<"element is found";
    }else{
        cout<<endl<<"element not found";
    }
}
