#include <stdio.h>

int main() {

        /* only integer
        int a, b;
	scanf("%d%d", &a, &b); //&:pointer

        int hap = a + b;
        int cha = a - b;
        int gop = a * b;
        int mok = a / b;
        
        printf("%d + %d = %d\n", a, b, hap);
        printf("%d - %d = %d\n", a, b, cha);
        printf("%d * %d = %d\n", a, b, gop);
        printf("%d / %d = %d\n", a, b, mok);
	*/

	//include real number
        float a, b;
        scanf("%f%f", &a, &b); //&:pointer

        float hap = a + b;
        float cha = a - b;
        float gop = a * b;
        float mok = a / b;

        printf("%f + %f = %f\n", a, b, hap);
        printf("%f - %f = %f\n", a, b, cha);
        printf("%f * %f = %f\n", a, b, gop);
        printf("%f / %f = %f\n", a, b, mok);

}

