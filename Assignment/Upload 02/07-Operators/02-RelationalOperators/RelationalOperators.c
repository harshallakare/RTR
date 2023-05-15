#include<stdio.h>

int main(void)
{
	//varibale declaration 
	int a;
	int b;
	int result; 

	printf("Harshal Lakare\n\n");
	//code
	printf("\n\n");
	printf("Enter ONe Integer : ");
	scanf("%d", &a);

	printf("\n\n");
	printf("Enter Another Interger : ");
	scanf("%d", &b);

	printf("\n\n");
	printf("If Answer = 0, It is 'FALSE'. \n");
	printf("If Answer = 1, It Is 'TRUE'.\n\n");

	result = (a < b);
	printf("(a < b)  A = %d IS Greater Than B = %d					\t Answer = %d\n", a, b, result);

	result = (a >= b);
	printf("(a > b)  A = %d Is Greater Than B = %d					\t Answer = %d\n", a, b, result);

	result = (a <= b);
	printf("(a <= b) A = %d Is less than or equal to B = %d			\t\t Answer = %d\n", a, b, result);

	result = (a >= b); 
	printf("(a >= b) A =%d Is Greater than Or Equeal To B %d		\t\t\t Answer = %d\n", a, b, result);

	result = (a == b); 
	printf("(a == b) A =%d Is Equal To b = %d						\t Answer = %d\n", a, b, result);

	result = (a != b); 
	printf("(a != b) A = %d Is not Equal To B = %d					\t Answer = %d\n", a, b, result);

	return(0);

}