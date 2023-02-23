#include <map>
#include <string>
#include <iostream>
using namespace std;

int main() {
	map<string, string> phonebook;

	phonebook.insert(pair<string, string>("A", "9837372040"));
	phonebook.insert(pair<string, string>("B", "2837462837"));

	map<string, string>::iterator it;
	for (it = phonebook.begin(); it != phonebook.end(); ++it) {
		cout << it->first << endl;
		cout << it->second << endl;
	}

	cout << phonebook["A"] << endl;
}