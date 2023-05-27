#include<stdio.h>

int main(void)
{
	//function protoypes 
	void PrintBinaryFormOfNumber(unsigned int);

	//varible declarations 
	unsigned int hbl_a;
	unsigned int hbl_b;
	unsigned hbl_result; 

	//code 
	printf("Harshal Lakare \n\n\n");
	printf("\n\n");
	printf("Enter An Integer = ");
	scanf("%u", &hbl_a);

	printf("\n\n");
	printf("Enter Another Integer");
	scanf("%u", hbl_b);

	printf("\n\n\n\n");
	hbl_result = hbl_a | hbl_b;
	printf("Bitwise OR-ing Of \nA = %d (decimal) and B = %d (Decimal) gives result %d (Decimal). \n\n", hbl_a, hbl_b, hbl_result);

	PrintBinaryFormOfNumber(hbl_a);
	PrintBinaryFormOfNumber(hbl_b);
	PrintBinaryFormOfNumber(hbl_result);
	return(0);
}
// ****** Begainers to C Programming Language : Please Ignore the Code of the Following function snippet 'PrintBinaryFormOfNumber()' ******
// ****** You may come back to this code and will understand IT much better after you have covered : Arrays , loops and functions ******
// ****** The only Objective of writing this fuction was to obtain the binary repesentation of decimal integers so that BIT-WISE AND-ing, OR-ing , COMPLEMENT AND BIT-SHITFTING Could be Understood with great EASE ******

/*
void PrintBinaryFormOfNumber(unsigned int decimal_number)
{
	//varibale declerations 
	unsigned int quotient, remainder; 
	unsigned int num;
	unsigned int binary_array[8];
	int i;

	//code
	for (i = 0; i < 8; i++)
		binary_array[i] = 0; 

	printf("The Binary Form Of the Decimal Interger % d IS \t=\t", decimal_number);
	num = decimal_number l
	i = 7; 
	while (num != 0)
	{
		quotient = num / 2; 
		remainder = num % 2; 
		binary_array[i] = remainder; 
		num = quotient; 
		i--; 
	}

	for (i = 0; i < 8; i++)
		printf("%u", binary_array[i]);

	printf("\n\n");
		
}
*/