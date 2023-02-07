#include <iostream>
using namespace std;

struct Point {
	int x;
	int y;
};

void Print(Point p);

int main() {
	Point a = { -1, 1 };
	Print(a);
}

void Print(Point p) {// pass by value.
	cout << "x = " << p.x << endl;
	cout << "y = " << p.y << endl;
}

/*
* In this example we are passing structure argument by value. so there contain same two contents i.e. a and p.
* Usually we avoid this.
* Because it takes more memory and there is data redundancy.
*/