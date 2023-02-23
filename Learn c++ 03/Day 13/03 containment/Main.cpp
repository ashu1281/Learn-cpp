#include "PointCollection.h"

int main() {
	PointCollection obj;

	Point u = { 1, -1 };
	obj.AddPoint(u);

	Point v = { 1, 5 };
	obj.AddPoint(v);

	Point w = { 5, -1 };
	obj.AddPoint(w);

	obj.RemovePoint(w);
	obj.RemovePoint(v);
	obj.RemovePoint(u);
}



/*
- Note struct Node is nested within struct PointCollection.
*/