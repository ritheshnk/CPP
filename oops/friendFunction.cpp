//refer this video
//https://youtu.be/Tk-4KUoatg8

#include <iostream>
using namespace std;

class complex;

class realSum
{
    public:
        int RealSum(complex, complex);
        int imagin(complex,complex);
};

class complex
{
    int a, b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    //Individual declaration of the function inside the class
    // friend int realSum::RealSum(complex, complex);
    // friend int realSum::imagin(complex, complex);

    //declaring whole class as friend

    friend class realSum;

    void display(void)
    {
        cout << a;
    }
};

int realSum ::RealSum(complex c1, complex c2)
{
    return (c1.a + c2.a);
}

int realSum ::imagin(complex c1, complex c2)
{
    return (c1.b + c2.b);
}

int main()
{
    complex c1,c2;
    c1.setData(4,5);
    c2.setData(7,6);

    realSum r;
    int res=r.RealSum(c1,c2);
    cout<<res;

    int imagi=r.imagin(c1,c2);
    cout<<" +i"<<imagi;
    return 0;
}