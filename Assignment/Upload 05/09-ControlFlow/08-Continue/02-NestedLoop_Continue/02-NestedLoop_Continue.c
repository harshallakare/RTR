#include<stdio.h>
int main(void)
{
	//variable declarations 
	int i, j;

	//code 
	printf("Harshal Lakare \n\n");
	printf("\n\n");

	printf("Outer Loops Prints Odd Number Between 1 and 10 : \n\n");
	printf("Inner Loop Printers Even Number Between 1 and 10 For every Odd Number Printed by Outer Loop \n\n");

	//condition for a number to be even number => division of the number by 2 leave no remainder (remainder = 0 )
	//condition for a number to be odd number => divisionb of the number by 2 leave remainder (remainder = 1 (usually))

	for (i = 1; i <= 10; i++)
	{
		if (i % 2 != 0) // If number (i) is odd ...
		{
			printf("i = %d\n", i );
			printf("---------\n");
			for (j = 1; j <= 10; j++)
			{
				if (j % 2 == 0) //If Number (j) Is Even....
				{
					printf("\tj = %d\n", j );
				}
				else //If Number (j) Is Odd 
				{
					continue;
				}
			}
			printf("\n\n");
		}
		else // If Number (i) Is Even
		{
			continue; 
		}
	}
	printf("\n\n");

	return(0);

}