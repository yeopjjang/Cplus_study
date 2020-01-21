#include <stdio.h>

int main() {
	// %d : output integer
	printf("%d + %d = %d\n", 2, 3, 5);

	// %f : output real number
	printf("%f\n", 3.14);
	printf("%.2f\n", 3.141592);

	// %g : output real number (index form)
	printf("%g\n", 3.141592);
	printf("%.3g\n", 8723984712.12837468723);

	// %c : output text (alphabet, number, signe, \n)
	printf("%c %c %c\n", 'a', 'b', 'c');

	// %s : output string 
	printf("%s\n", "Hello");	
}
