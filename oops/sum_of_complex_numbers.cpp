#include<iostream>
using namespace std;

class complex{

    private:
        int a,b;
    
    public:
      void input(int v1,int v2)
      {
        a=v1;
        b=v2;

      }

      void sumOfComplex(complex c1 ,complex c2)
      {
        a=c1.a+c2.a;
        b=c1.b+c2.b;
      }

      void result()
      {
        cout<<endl<<"the sum of the complex number is "<<a<<"+i"<<b;
      }

};

int main()
{
    complex c1,c2,c3;
    c1.input(1,2);
    c2.input(2,3);
    c3.sumOfComplex(c1,c2);
    c3.result();

}
