#include<stdio.h>

int main(void)
{
	//varibale Declaration 
	int hbl_a;
	int hbl_b;
	int hbl_x;

	//code 
	printf("Harshal Lakare \n");
	printf("Enter A number : ");
	scanf("%d",&hbl_a);

	printf("\n\n");
	printf("Enter Another Number : ");
	scanf("%d",&hbl_b);

	printf("\n\n");

	//Since, In all the following 5 cases, The operand on the Left 'a' Is Getting Repeated Immeiately on the right (e.g. a = a + b or a = a - b )
	//We are using Compound Assigment Operators +=,-+,*=,/+ and %= 

	//Since, 'a' will be assigned the value of (a + b) at the expression (a += b) We must save the original value of 'a' to another varibale (x)
	hbl_x = hbl_a;
	hbl_a += hbl_b; // a = a + b
	printf("Addition Of hbl_A = %d And hbl_B = %d Gives %d.\n", hbl_x, hbl_b, hbl_a);

	//Value Of 'a' will be Altered in the Above expression is uses here...
	//Since, 'a' will be assigned the value of (a - b) at rhe expression (a -= b), we must save the original value of 'a' to another variable (x)
	hbl_x = hbl_a;
	hbl_a -= hbl_b; //a = a -b 
	printf("Subtractions of hbl_A = %d And hbl_B = %d Gives %d. \n", hbl_x, hbl_b, hbl_a);

	//Value of 'a' Alterred In the Above Expression IS used Here .. 
	//Since, 'a' will be assigned the value of (a * b) at the expression (a *= b), we must save the original Value of 'a' to another variable (x)
	hbl_x = hbl_a;
	hbl_x *= hbl_b; //a = a * b 
	printf("Multiplication of hbl_A = %d Aad hbl_B = %d Gives %d.\n", hbl_x, hbl_b, hbl_a);

	//Value Of 'a' Alterred In the Above Expression IS used here...
	//Since, 'a' will be assigned the value of (a / b) At the expression (a / b), we must save the original value of 'a' to another varibale (x)
	hbl_x = hbl_a;
	hbl_a /= hbl_b; // a = a / b
	printf("Divison of hbl_A = %d And hbl_B = %d Gives Quotient %d. \n", hbl_x, hbl_b, hbl_a);

	//Value Of 'a' Altered IN the Above Expression Is used here...
	//Since, 'a' will be assigned the value of (a % b) at the expression (a %= b), We must save the original Value of 'a' to another Variable (x)
	hbl_x = hbl_a;
	hbl_a %= hbl_b; // a = a % b 
	printf("Division of hbl_A = %d And hbl_B = %d Gives Remainder %d. \n", hbl_x, hbl_b, hbl_a);

	printf("\n\n");

	return(0);
}
