#include <stdio.h>

int main() {

	int a = 10;
	int b;


	printf("pre add cal\n");
	b = ++a; 
	printf("a : %d\n", a);
	printf("b : %d\n", b);


	printf("post add cal\n");
	b = a++;
	printf("a : %d\n", a);
	printf("b : %d\n", b);
}
