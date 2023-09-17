#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }

    friend void distance(point, point);

    void display(void)
    {
        cout << "the is point is (" << x << "," << y << ")" << endl;
    }
};

void distance(point p, point q)
{
    int dis = sqrt(pow(q.x - p.x, 2) + pow(q.y - p.y, 2));
    cout << "the distance is " << dis;
}

int main()
{
    point p(1, 0);
    point q(70, 0);
    distance(p, q);
    return 0;
}