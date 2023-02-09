#pragma once
class Point {
public:
	Point(int x, int y);

public:
	int GetX()const;
	int GetY() const;

private:
	int m_x;
	int m_y;
};

class Rectangle {
public:
	Rectangle(int t, int l, int b, int r);

public:
	Point TopLeft() const;
	Point BottomRight() const;

public:
	Point CenterPoint() const;
	Rectangle Clone() const;

	void MoveToX(int x);
	void MoveToY(int y);

private:
	Point m_top;
	Point m_left;
	Point m_bottom;
	Point m_right;
};