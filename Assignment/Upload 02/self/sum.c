#include<stdio.h>

int main(void)
{
	printf("Harshal Lakare\n\n");
	
	//varaible declaration 
	int a;
	int b;
	int sum;

	//code
	printf("Please enter First Number :");
	scanf("%d",&a);

	printf("Please enter Second Number : ");
	scanf("%d",&b);

	sum = a + b;
	printf("Sum both Number is %d ", sum);
	return(0);
}