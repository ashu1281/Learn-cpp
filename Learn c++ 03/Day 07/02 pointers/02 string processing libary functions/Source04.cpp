#include <stdio.h>
#include <string.h>

int main() {
	const size_t size = 80;
	char buffer[size] = { 0 };
	char key[] = "apple";
	do {
		printf("Guess my favorite fruit? ");
		fflush(stdout);
		scanf_s("%79s", buffer, size);
	} while (strcmp(key, buffer) != 0);
	puts("Correct answer!");
}

/* 
- for string comparison with case ignored use _stricmp
*/