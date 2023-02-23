#include "PointCollection.h"

PointCollection::PointCollection() : m_pheadNode(nullptr), m_ptailNode(nullptr), m_count(0) {}

PointCollection::~PointCollection() {
	while (m_count > 0) {
		Node* pdelnode = m_pheadNode;
		m_pheadNode = m_pheadNode->pnextNode;
		pdelnode->pnextNode = nullptr;
		delete pdelnode;
		pdelnode = nullptr;
		m_count--;
	}
	m_pheadNode = m_ptailNode = nullptr;
}

void PointCollection::AddPoint(Point point) {
	PointCollection::Node* newNode = new PointCollection::Node();
	newNode->point.x = point.x;
	newNode->point.y = point.y;
	newNode->pnextNode = nullptr;

	if (m_count == 0) {
		m_pheadNode = m_ptailNode = newNode;
		m_count++;
		return;
	}

	m_ptailNode->pnextNode = newNode;
	m_ptailNode = newNode;
	m_count++;
}

void PointCollection::RemovePoint(Point point) {
	if (m_count == 0) return;

	PointCollection::Node* pprevNode = nullptr;
	PointCollection::Node* pdelNode = m_pheadNode;

	/* locate the node to be deleted */
	while (pdelNode != nullptr) {
		if (pdelNode->point.x == point.x && pdelNode->point.y == point.y)
			break; // found the node
		pprevNode = pdelNode;
		pdelNode = pdelNode->pnextNode;
	}

	if (pdelNode != nullptr) { // node to be deleted is located
		if (pprevNode == nullptr) { // means pdelNode is referring to first node
			m_pheadNode = pdelNode->pnextNode;
		}
		else { // means pdelNode is referring to some intermediate node or last node.
			pprevNode->pnextNode = pdelNode->pnextNode;
		}

		// ptailNode must point to second last node if node to be deleted is the last node
		if (pdelNode->pnextNode == nullptr) {
			m_ptailNode = pprevNode;
		}

		// actual deletion of the node
		pdelNode->pnextNode = nullptr;
		delete pdelNode;
		pdelNode = nullptr;

		// reduce m_count by 1, since one node is deleted from the list.
		m_count--;
	}
}