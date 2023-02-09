//Use the following driver program to comprehend the servicesand states you should be providingand keeping in a rectangle object.Export rectangle class from the DLL.
#include <assert.h>
#include "Rectangle.h"


class Point {
public:
    Point(int x, int y):m_x(x), m_y(y){}

public:
    int GetX() const {
        return m_x;
    }
    int GetY() const {
        return m_y;
    }

private:
    int m_x;
    int m_y;

};

class Rectangle {
public:
    Rectangle(int t, int l, int b, int r): m_top(t), m_left(l), m_bottom(b), m_right(r) {}

public:
    Point CenterPoint() const {
        int x = (m_left+m_right) / 2;
        int y = (m_top + m_bottom) / 2;
        return Point(x,y);
    }

    Point TopLeft() const {
  
         return Point(m_left, m_top);
    }

    Rectangle Clone() const{
        return Rectangle(m_top, m_left , m_bottom, m_right);

    }

private:
    int m_top;
    int m_left;
    int m_bottom;
    int m_right;

};

int main() {
    int top = 10;
    int left = 10;
    int bottom = 16;
    int right = 40;
    const Rectangle r(top, left, bottom, right);

    // Following test case checks
    // - Rectangle's CenterPoint member function.
    Point centerPoint = r.CenterPoint();
    assert(centerPoint.GetX() == Point(25, 13).GetX() &&
        centerPoint.GetY() == Point(25, 13).GetY());

    // Following test case checks
    // - Rectangle's Clone member function.
    Rectangle u = r.Clone();
    assert(u.TopLeft().GetX() == r.TopLeft().GetX() && u.TopLeft().GetY() == r.TopLeft().GetY());

    // Following test case checks
    // - Rectangle's MoveToX and MoveToY member functions.
    u.MoveToX(11);
    u.MoveToY(9);
    assert(u.TopLeft().GetX() == 11 && u.TopLeft().GetY() == 11);
}
