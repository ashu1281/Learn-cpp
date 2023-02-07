int main() {
	int result = 0;
	result = 3 - 2 * 4; // (result = (3 - (2 * 4))); -5 --> follow precedence rule
	result = 3 * 2 / 4; // (result = ((3 * 2) / 4)); 1 --> * and / have same precedence so it follows associative rule
}

/*
- In the first expression since the operators (=, -, *) belongs to different groups
  it is the precedence of the operators matter.
- In the second expression since the operators (* and /) belongs to the same group
  it is the associativity of the operators matter.
- Thus, when operators belong to same group associativity is considered.
  And if they belong to different groups then precedence between them is considered.
*/
