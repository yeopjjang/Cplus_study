#include <stdio.h>

int main () {
	/*
	char a = 67;

	scanf("%c", &a);

	printf("input character is %c.\n", a);
	*/

	char a;

	printf("input character : ");
	scanf("%c", &a);
	printf("%c's ASCII number : %d\n", a, a);
}
