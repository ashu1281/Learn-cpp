#pragma once

#include "Point.h"

class PointCollection {
	struct Node {
		Point point;
		Node* pnextNode;
	};
public:
	PointCollection();
	~PointCollection();
public:
	void AddPoint(Point point);
	void RemovePoint(Point point);
private:
	Node* m_pheadNode;
	Node* m_ptailNode;
	size_t m_count;
};

