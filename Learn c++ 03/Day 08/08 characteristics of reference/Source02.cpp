
int main() {
	int& i = nullptr; // lvalue reference cannot be assigned nullptr // "&" is calld ref and "&&" is called refref 
	int&& j = nullptr; // rvalue reference cannot be assigned nullptr
	/*is called refref.used for referencing rvalues.*/

	int& k = 1; // rvalue cannot be assigned to lvalue reference
	const int& l = 1; // but it can be assigned to const lvalue reference // you can refer ravlue by ref using const
	
	int&& m = 0; // though, nullptr cannot be assigned to rvalue reference, 0 or any other number can be assigned
	
	int& arr[3]; // array of references not possible
}

/*
- Reference cannot be null.
- What is lvalue?
  lvalue is an expression whose address can be taken.
- What is rvalue?
  rvalue is an expression whose address can not be taken.
- A reference that can refer to lvalue is known as lvalue reference and is written with
  single '&' (ref).
- A reference that can refer to rvalue is known as rvalue reference and is written with
  double '&' (ref).
- Note, lvalue reference can refer to lvalue and rvalue reference can refer to rvalue.
  Following rule however is an exception: In absence of rvalue reference
  a const lvalue refernce can refer to rvalue.
- Array of references not possible.
*/