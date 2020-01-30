#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);

	if (n > 0) {
		printf("n is positive number\n");
	}


	else if (n == 0) {
		printf("n is 0\n");
	}

	else if (n == -7) {
		printf("n is -7\n");
	}
	
	else {
		printf("n is negative number exclude -7\n");
	}


}

