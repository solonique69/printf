#include <stdio.h>

int main(void)
{
	int D, J, I;

	printf("Before initialization\n");
	printf("========================\n");
	printf("D is %d\n", D);
	printf("J is %d\n", J);
	printf("I is %d\n", I);

	D = 4;
	J = 8;
	I = 15;

	printf("After initialization\n");
	printf("========================\n");
	printf("D is %d\n", D);
	printf("J is %d\n", J);
	printf("I is %d\n", I);

	scanf("%d", &D);
	scanf("%d", &J);
	scanf("%d", &I);

	printf("After scanf\n");
	printf("========================\n");
	printf("D is %d\n", D);
	printf("J is %d\n", J);
	printf("I is %d\n", I);

	return (0);
}
