#include<stdio.h>
int main(void)
{
	//variable declarations 
	int i;

	//code 
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	
	for (i = 0; i <= 100; i++)
	{
		//codition for a number to be even number ==> division of number by 2 leave no remainder (remainder = 0 )
		//if remainder is not 0 , the number is odd number ....
		if (i % 2 != 0)
		{
			continue; 
		}
		else
		{
			printf("\t%d\n",i);
		}
	}
	printf("\n\n");

	return(0);
}