#include <stdio.h>

int main() {


	/*
	int choice;

	printf("NEW GAME : 1\n");
	printf("LOAD GAME : 2\n");
	printf("SETTING : 3\n");
	printf("CREDIT :4\n");

	scanf("%d", &choice);

	if (choice == 1) {
		printf("NEW GAME\n");
	}	

	else if (choice == 2) {
		printf("LOAD\n");
	}

	else if (choice == 3) {
		printf("SETTING");
	}

	else if (choice == 4) {
		printf("CREDIT");
	}

	else {printf("you choice wrong number\n");

	}*/

       	int choice;

	makeChoice:

        printf("NEW GAME : 1\n");
        printf("LOAD GAME : 2\n");
        printf("SETTING : 3\n");
        printf("CREDIT :4\n");

        scanf("%d", &choice);
	switch (choice) {
		case 1: 
			printf("NEW GAME\n");
			break;

		case 2:
			printf("LOAD\n");
			break;

		case 3: 
			printf("SETTING\n");
			break;

		case 4: 
			printf("CREDIT\n");
			break;

		default : printf("you choice wrong number\n");
			  goto makeChoice;
			  break;
	}

}
