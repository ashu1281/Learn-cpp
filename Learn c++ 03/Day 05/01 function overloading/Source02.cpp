

//int f(int a, int b) {
//
//}
//int f(double a, double b) {
//
//}

int f() { return 1; }

double f() { return 1.0; }s

int main() {
	int a = f();
	double b = f();
}

/*
* Function overloading cannot occur between two functions
  that only differ in return type.  
*/ 