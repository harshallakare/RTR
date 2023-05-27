#include<stdio.h>

int main(void)
{
	//function prototypes 
	void PrintBinaryFormOfNUmber(unsigned int);

	//variable declarations 
	unsigned int hbl_a; 
	unsigned int hbl_result;

	//code 
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	printf("Enter An Interger = ");
	scanf("%u", &hbl_a);

	printf("\n\n\n\n");
	hbl_result = ~hbl_a;
	printf("Bitesie Complementing of \nA = %d (Decimal) gives result %d (Decimal). \n\n", hbl_a,hbl_result);
	PrintBinaryFormOfNumber(hbl_a);
	PrintBinaryFormOfNumber(hbl_result);

	return(0);
}

// ****** Begainner to C Programming language : Please ignore the code of the follwoing function snippet 'PrintBinaryFormOfNumber()' ******
// ****** YOu maye come back to this code and will understand It much better after you have covered : ARRAYS, LOOPS AND FUNCTIONS ******
// ****** The only objective of writing this function was to obtain the binary represeantion of the Decimal interger so that BIT-WISE AND-ing,OR-ing, Complement AND BIT-Shifiting Could be understood with great ease ******

void PrintBinaryFormOfNumber(unsigned int decimal_number)
{
	//variable declaration 
	unsigned int quotient, remainder; 
	unsigned int num;
	unsigned int binary_array[8];
	int i; 

	//code 
	for (i = 0; i < 8; i++)
		binary_array[i] = 0; 
	printf("The Binary Form Of the Decimal Interger %d Is \t=\t", decimal_number);
	num = decimal_number;
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

	printf(\n\n);
}