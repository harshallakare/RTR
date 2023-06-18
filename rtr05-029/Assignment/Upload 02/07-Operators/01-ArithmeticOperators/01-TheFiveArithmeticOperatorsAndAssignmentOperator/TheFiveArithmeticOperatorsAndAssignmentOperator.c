#include<stdio.h>

int main(void)
{
	//varibale declaration 
	int hbl_a; 
	int hbl_b;
	int hbl_result;

	//code
	printf("Harshal Lakare");
	printf("\n\n");
	printf("Enter A number : ");
	scanf("%d",&hbl_a);

	printf("\n\n");
	printf("Enter Another Number : ");
	scanf("%d",&hbl_b);
	
	printf("\n\n");
	//*** The Following are the 5 arthmetic Operators +,-,/ and % ****
	//*** Also, The Resultans of the Arithmetic Operations IN all the Below Five Cases Have bemm assigned to the vairable 'result' using the Assignment Operator (=) ***
	hbl_result = hbl_a + hbl_b;
	printf("Addition of hbl_A = %d and hbl_B = %d Gives %d. \n ", hbl_a, hbl_b, hbl_result);

	hbl_result = hbl_a - hbl_b;
	printf("Subtraction of hbl_A = %d and hbl_B = %d Gives %d. \n ", hbl_a, hbl_b, hbl_result);

	hbl_result = hbl_b * hbl_b;
	printf("Multiplication of hbl_A = %d and hbl_B = %d Gives %d.\n", hbl_a, hbl_b, hbl_result);

	hbl_result = hbl_a / hbl_b;
	printf("Division of hbl_A = %d and hbl_B = %d Gives Quotient %d.\n", hbl_a, hbl_b, hbl_result);

	hbl_result = hbl_a % hbl_b;
	printf("Division of hbl_A = %d and hbl_B = %d Gives Remainder %d.\n", hbl_a, hbl_b, hbl_result);

	printf("\n\n");
	
	return(0);
}
