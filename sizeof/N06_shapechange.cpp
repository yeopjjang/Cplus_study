#include <stdio.h>

int main() {

	/*integer/integer = integer
	int math=90, korean=95, english=96;
	int sum = math + korean + english;
	double avg = sum/3;

	printf("%f\n", avg);
	*/




	/*int -> double = real / integer = real
	int math=90, korean=95, english=96;
        double sum = math + korean + english;
        double avg = sum/3;

        printf("%f\n", avg);
	*/


	int math=90, korean=95, english=96;
        int sum = math + korean + english;
        double avg = (double)sum/3;//93.666667

        printf("%f\n", avg);

}
