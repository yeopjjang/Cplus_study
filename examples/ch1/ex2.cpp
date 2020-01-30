#include <stdio.h>

int main () {

	float weight;
	float height;


	printf("write your weight(kg)");
	scanf("%f", &weight);


	printf("write your height(m)");
	scanf("%f", &height);


	float bmi = weight / (height * height);
	printf("your BMI : %f\n", bmi);	



}
