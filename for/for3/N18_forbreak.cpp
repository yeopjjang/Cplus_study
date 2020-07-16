#include <stdio.h>

int main() {

	for (int i = 1; ; i++){
		int k;
		scanf("%d", &k);

		if (k == 0){break;}
	
		printf("%dnt number is %d\n", i, k);
	}
}
