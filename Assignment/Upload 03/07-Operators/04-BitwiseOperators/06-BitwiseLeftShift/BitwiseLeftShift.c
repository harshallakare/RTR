#include<stdio.h>

int main(void)
{
	//function prototypes 
	void PrintBinaryFormOfNumber(unsigned int);

	//variable declarations 
	unsigned int hba_a;
	unsigned int hba_num_bits; 
	unsigned int hba_result;

	//code
	printf("\n\n");
	printf("Enter An interger = ");
	scanf("%u", &hba_a);

	printf("\n\n");
	printf("by How Many Bits Do you want to shift A = %d To the Left ?", hba_a);
	scanf("%u", &hba_num_bits);

	printf("\n\n\n\n");
	hba_result = hba_a << hba_num_bits;
	printf("Bitwise LEFT-SHIFT By %d Bits Of A = %d \nGives The Result =%d (Decimal). \n\n", hba_num_bits,hba_a,hba_result);
	PrintBinaryFormOfNumber(hba_a);
	PrintBinaryFormOfNumber(hba_result);

	return(0);
}

// ****** Begainner to C Programming language : Please ignore the code of the follwoing function snippet 'PrintBinaryFormOfNumber()' ******
// ****** YOu maye come back to this code and will understand It much better after you have covered : ARRAYS, LOOPS AND FUNCTIONS ******
// ****** The only objective of writing this function was to obtain the binary represeantion of the Decimal interger so that BIT-WISE AND-ing,OR-ing, Complement AND BIT-Shifiting Could be understood with great ease ******

void PrintBinaryFormOfNumber(unsigned int decimal_number)
{
	//variable Declarations 
	unsigned int quotient, remainder; 
	unsigned int num;
	unsigned int binary_array[8];
	int i;

	//code 
	for (i = 0; i < 8; i++)
		binary_array[i] = 0; 
	printf("The Binary Form Of The decimal Interger %d Is \t=\t", decimal_number);
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
		printf("%u",binary_array[i]);

	printf("\n\n");
}