#include<stdio.h>

int main(void)
{
	//varibale declaration 
	int a; 
	int b; 
	int result;

	//code
	printf("Harshal Lakare");
	printf("\n\n");
	printf("Enter A number : ");
	scanf("%d",&a);

	printf("\n\n");
	printf("Enter Another Number : ");
	scanf("%d",&b);
	
	printf("\n\n");
	//*** The Following are the 5 arthmetic Operators +,-,/ and % ****
	//*** Also, The Resultans of the Arithmetic Operations IN all the Below Five Cases Have bemm assigned to the vairable 'result' using the Assignment Operator (=) ***
	result = a + b;
	printf("Addition of A = %d and B = %d Gives %d. \n ",a,b, result);	

	result = a - b;
	printf("Subtraction of A = %d and B = %d Gives %d. \n ", a, b, result);

	result = a * b;
	printf("Multiplication of A = %d and B = %d Gives %d.\n", a, b, result);

	result = a / b;
	printf("Division of A = %d and B = %d Gives Quotient %d.\n", a, b, result);

	result = a % b;
	printf("Division of A = %d and B = %d Gives Remainder %d.\n", a, b, result);

	printf("\n\n");
	
	return(0);
}
