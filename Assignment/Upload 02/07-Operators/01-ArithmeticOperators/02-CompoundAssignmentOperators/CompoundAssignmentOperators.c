#include<stdio.h>

int main(void)
{
	//varibale Declaration 
	int a;
	int b;
	int x;

	//code 
	printf("Harshal Lakare \n");
	printf("Enter A number : ");
	scanf("%d",&a);

	printf("\n\n");
	printf("Enter Another Number : ");
	scanf("%d",&b);

	printf("\n\n");

	//Since, In all the following 5 cases, The operand on the Left 'a' Is Getting Repeated Immeiately on the right (e.g. a = a + b or a = a - b )
	//We are using Compound Assigment Operators +=,-+,*=,/+ and %= 

	//Since, 'a' will be assigned the value of (a + b) at the expression (a += b) We must save the original value of 'a' to another varibale (x)
	x = a; 
	a += b; // a = a + b
	printf("Addition Of A = %d And B = %d Gives %d.\n", x, b, a);

	//Value Of 'a' will be Altered in the Above expression is uses here...
	//Since, 'a' will be assigned the value of (a - b) at rhe expression (a -= b), we must save the original value of 'a' to another variable (x)
	x = a; 
	a -= b; //a = a -b 
	printf("Subtractions of A = %d And B = %d Gives %d. \n", x, b, a);

	//Value of 'a' Alterred In the Above Expression IS used Here .. 
	//Since, 'a' will be assigned the value of (a * b) at the expression (a *= b), we must save the original Value of 'a' to another variable (x)
	x = a; 
	x *= b; //a = a * b 
	printf("Multiplication of A = %d Aad B = %d Gives %d.\n",x, b, a);

	//Value Of 'a' Alterred In the Above Expression IS used here...
	//Since, 'a' will be assigned the value of (a / b) At the expression (a / b), we must save the original value of 'a' to another varibale (x)
	x = a; 
	a /= b; // a = a / b
	printf("Divison of A = %d And B = %d Gives Quotient %d. \n", x, b, a);

	//Value Of 'a' Altered IN the Above Expression Is used here...
	//Since, 'a' will be assigned the value of (a % b) at the expression (a %= b), We must save the original Value of 'a' to another Variable (x)
	x = a; 
	a %= b; // a = a % b 
	printf("Division of A = %d And B = %d Gives Remainder %d. \n", x, b, a);

	printf("\n\n");

	return(0);
}
