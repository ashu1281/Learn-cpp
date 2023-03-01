template<class T, class U, class V> //we can also use "typename" instead of "class"
void f(T a, U b, V c) {

}

//partial specialization
template<class T, class V>
void f(T a, int b, V c) {

}

//partial specialization
template<class V>
void f(double a, int b, V c) {

}

//full specialization
template<>
void f(double a, double b, bool c) {

}



int main() {
	f(5, 'a', 2.5);//(int, char, double) so it called 1st
	f('a', 5, 2.5);//(char, int ,double) it called 2nd
	f(2.5, 5, 'a');// 3rd (here 2nd and 3rd is possible but compiler choose most appropriate which is 3rd. )
	f(2.6, 1.8, true);// 4th
	return 0;
}