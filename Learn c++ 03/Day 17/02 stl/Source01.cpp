#include <vector>
#include <iostream>
using namespace std;

int main() {
	vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	size_t capacity = v.capacity();
	size_t size = v.size();

	vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); ++it) {
		cout << *it << endl;
	}

	v.pop_back();
	capacity = v.capacity();
	size = v.size();
	for (it = v.begin(); it != v.end(); ++it) {
		cout << *it << endl;
	}

	v.clear();
	capacity = v.capacity();
	size = v.size();
}