#include<stdio.h>

int main(void)
{
	//function prototypes 
	void PrintBinaryFormOfNumber(unsigned int);

	//varibale declarations 
	unsigned int hbl_a;
	unsigned int hbl_b;
	unsigned int hbl_result;

	//code 
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	printf("Enter An Integer = ");
	scanf("%u", &hbl_a);

	printf("\n\n");
	printf("Enter Another Integer = ");
	scanf("%u", &hbl_b);

	printf("\n\n\n\n");
	hbl_result = hbl_a ^ hbl_b;
	printf("Bitwise XOR-ing Of \nA = %d (Decimal) and B = %d Decimal gives result %d (Decimal). \n\n", hbl_a,hbl_b, hbl_result);

	PrintBinaryFormOfNumber(hbl_a);
	PrintBinaryFormOfNumber(hbl_b);
	PrintBinaryFormOfNumber(hbl_result);

	return(0);
}

// ****** Beginners to C programming Language : Please ignore the code of the follwoing function snippet 'PrintBinaryFormOfNumber()' ******
// ****** You may come back to this code and will understand it much better after you have covered : ARRAYS, LOOPS AND FUNCTIONS ******
// The Only Objective of writing this fuctions was to obtain the binary representaion of decimal interger so that BIT-WISE AND_ing, OR-ing, COMPLEMENT AND BIT-SHITING could be understood with great ease ******


/*
void PrintBinaryOfNumber(unsigned int decimal_number)
{
	//varible declaration 
	unsigned int quotient, remainder; 
	unsigned int num;
	unsigned int binary_array[8];
	int i;

	//code 
	for (i = 0; i < 8; i++)
		binary_array[i] = 0; 
	printf("The Bianry Form Of The decimal interget %d Is \t=\t", decimal_number);
	num = decimal_number;
	i = 7;
	while (num != 0)
	{
		quotient = num / 2;
		remainder = number % 2;
		binary_array[i] = remainder; 
		num = quotient;
		i--;
	}
	for i(i = 0; i < 8; i++)
		printf("%u", binary_array[i]);
	printf("\n\n")
}
*/