int main() {
	int i = 1;
	int& j = i;
	int& k = j;// Is also same as int& k=i;
	k += 5;

	int* ptr = &j;
	*ptr = 10;
}