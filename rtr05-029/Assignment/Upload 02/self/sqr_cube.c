#include<stdio.h>

int main(void)
{
	printf("Harshal Lakare\n\n");

	//Variable Declaration
	int a;
	int sqr;
	int cube;

	printf("Please enter any number\n");
	scanf("%d", &a);

	sqr = a * a;
	printf("Square of %d is %d\n", a, sqr);

	cube = a * a * a; 
	printf("Cube of %d is %d\n",a ,cube);

	return(0);
}
