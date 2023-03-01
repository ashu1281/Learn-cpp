//Write a program that dynamically allocates enough memory space to store a string such as “Hello”.It then increases the storage sufficiently high enough to append the word such as
//“World” to the existing “Hello”.

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char* str = new char[6]; // dynamically allocate memory for "Hello"
    strcpy_s(str, 6, "Hello"); // use strcpy_s to safely copy string to allocated memory
    cout << str << endl; // print original string

    size_t len = strlen(str); // get length of original string
    char* new_str = new char[len + 6]; // allocate new memory with enough space for "Hello" and "World"
    strcpy_s(new_str, len + 1, str); // copy original string to new memory

    // use strcat_s to safely concatenate "World" to new memory
    strcat_s(new_str, len + 6, "World");
    cout << new_str << endl; // print new string

    delete[] str; // free memory for original string
    delete[] new_str; // free memory for new string
    return 0;
}
