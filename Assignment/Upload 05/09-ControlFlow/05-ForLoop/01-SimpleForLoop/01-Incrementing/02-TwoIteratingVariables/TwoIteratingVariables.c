#include<stdio.h>
int main(void)
{
	//variable declarations 

	int i, j;

	//code 
	printf("\n\n");

	printf("Printing Digits 1to 10 and 10 to 100 : \n\n");

	for(i = 1, j = 10; i <= 10, j <= 100; j = j + 10)
	{
		printf("\t %d \t %d\n", i,j);
	}
	printf("\n\n");

	return(0);
}