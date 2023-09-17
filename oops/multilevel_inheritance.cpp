#include<iostream>
using namespace std;

class student{
    protected:
        int rollNo;
    public:
        void setRollNo(int roll)
        {
            rollNo=roll;          
        }
        void getRollNo(void)
        {
            cout<<"the roll number is "<<rollNo<<endl;
        }
};

class Marks : public student{
    protected:
        float maths;
        float phy;
    public:
      void setMarks(float m1,float m2)
      {
        maths=m1;
        phy=m2;
      }

      void getMarks(){
        cout<<"the marks obtained in maths is "<<maths<<endl;
        cout<<"and the mark obtained in physics is "<<phy<<endl;
      }

};

class result : public Marks{
    public:
        float result;
        void display()
        {
            cout<<"the reuslt of roll number "<<rollNo<<" is "<<(maths+phy)/2<<endl;
        }
};

int main()
{
    result r;
    r.setRollNo(1);
    r.getRollNo();
    r.setMarks(98.0,96.0);
    r.getMarks();
    r.display();
}