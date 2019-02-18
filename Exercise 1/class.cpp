#include<iostream>
using namespace std;

class Point
{
private:
    double X;
    double Y;

public:
    Point()
    {
        X = 0;
        Y = 0;
    }

    Point(double x, double y)
    {
        X=x;
        Y=y;
    }

    double getX()
    {
        return X;
    }
    double getY()
    {
        return Y;
    }

    void setX(double x)
    {
        X = x;
    }
    void setY(double y)
    {
        Y = y;
    }
};

int main()
{
    Point p1;
    p1.setX(5);
    cout<<p1.getX();
    cout<<p1.getY();

    Point p2(4,2);
    cout<<p2.getX();
    cout<<p2.getY();

}

















