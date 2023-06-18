#include<iostream>
using namespace std;

int main()
{
    int n,m;
    int a[100][100];
    
    cout<<"enter the number of rows and coloumns ";
    cin>>n>>m;

    cout<<"enter numbe of elements  ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }


    cout<<"matix in spiral form is ";
    cout<<endl;

    int row_start=0,
        row_end=n-1,
        coloumn_start=0,
        coloumn_end=m-1 ;

        while(row_start<row_end && coloumn_start<coloumn_end)
        {
            //for first row we need to print each first value in every coloumn
            for(int row=coloumn_start;row<=coloumn_end;row++)
            {
                cout<<a[row_start][row]<<" ";
            }
            row_start++;

             //for last coloumn we need to print each first value in every ending row elements

            for(int col=row_start;col<row_end;col++)
            {
                cout<<a[col][coloumn_end]<<" ";
            }
            coloumn_end--;

            //for last row

            for(int row=coloumn_end;row>=coloumn_start;row--)
            {
                cout<<a[row_end][row]<<" ";
            }
            row_end--;

            //for first coloumn

            for(int col=row_end; col>row_start;col--)
            {
                cout<<a[col][coloumn_start]<<" ";
            }
            coloumn_start++;
        }


}