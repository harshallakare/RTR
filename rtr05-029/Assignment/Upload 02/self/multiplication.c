#include<stdio.h>

int main(void)
{
	printf("Harshal Lakare\n\n");

	//varaible declaration 
	int a;
	int b;
	int mul;

	//code
	printf("Please enter First Number :\n");
	scanf("%d", &a);

	printf("Please enter Second Number : \n");
	scanf("%d", &b);

	mul = a * b;
	printf("Sum of %d and %d Number is %d \n", a, b , mul);
	return(0);
}