#include<iostream>
#include<math.h>
using namespace std;

class point{
    private:
     int x,y;
    public:
        point(int a,int b)
        {
            x=a;
            y=b;
        }

        int distance(point  , point );
        void display(void)
        {
            cout<<"the is point is ("<<x<<","<<y<<")"<<endl;
        }

};

int point::distance(point p,point q)
{
    int dis= sqrt(pow(q.x - p.x,2) + pow(q.y - p.y,2));

    return dis;
}

int main()
{
    point p(4,5);
    //p.display();
    point q=point(5,9);
    //q.display();


    
}