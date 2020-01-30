#include <stdio.h>

int main() {

	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);

	if (a > b) {

	// a > b > c
	// c > a > b
	// a > c > b
	
		if (a > c) {
			printf("%d\n", a);
		}
		
		else {
			printf("%d\n", c);
		}

	}

	else { // b > a
	

	//b > a > c
	//b > c > a
	//c > b > a
	
		if (b > c) {
			printf("%d\n", b);
		}

		else {
			printf("%d\n", c);
		
		}


	}



}
