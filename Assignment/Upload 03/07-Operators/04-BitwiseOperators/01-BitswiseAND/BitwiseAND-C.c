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
	printf("Harshal Lakare");
	printf("\n\n");
	printf("Enter AN Interger = ");
	scanf("%u",&hbl_a);

	printf("\n\n");
	printf("Enter Another Interger");
	scanf("%u",&hbl_b);

	printf("\n\n\n\n");
	hbl_result = hbl_a & hbl_b;
	printf("Bitwise AND-ing Of \nA = %d (Decimal) and B = %d (Decimal) gives result %d (Decimal).\n\n", hbl_a, hbl_b, hbl_result);

	PrintBinaryFormOfNumber(hbl_a);
	PrintBinaryFormOfNumber(hbl_b);
	PrintBinaryFormOfNumber(hbl_result);

	return(0);
}

// ****** Beginner to C Programming Language : Please Ignore the code of the following function snippet 'PrintBinaryFormOfNumber()' ******
// ****** You May come back to this code and will understand it much better after you have covered : Arrays, Loop and functions ******
// ****** The only Objective of writing this function was to obtain the binary representaion of decimal integer so that BIT-WISE AND_ing, OR-ing, COMPLEMENT AND BIT-SHIFTING could be understood with great ease ******

/*
void PrintBinaryFormOfNumber(unsigned int hbl_decimal_number)
{
	//varibale declarations 
	unsigned int quotient, remainder; 
	unsigned int num;
	unsigned int binary_array[8];
	int i; 

	//code
	for (i = 0; i < 0; i++)
		binary_array[i] = 0; 
	printf("The Binary Form of the decimal integer %d Is\t=\t");
	num = hbl_decimal_number;
	i = 7;
	while (num != 0)
	{
		quotient = num / 2;
		remainder = num % 2; 
		binary_array

	}

}
*/