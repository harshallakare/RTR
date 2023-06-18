#include<stdio.h>

#define NUM_ELEMENTS 10 

int main(void)
{
	//varaible declarations 
	//int iArray[NUM_ELEMENTS];
	int iArray[NUM_ELEMENTS];
	int i, num, sum = 0; 

	//code 
	printf("\n\n");

	// *** Array Elements Input ***
	printf("Enter Integer Elements For array : \n\n");
	for (i = 0; i < NUM_ELEMENTS; i++)
	{
		scanf("%d", &num);
		iArray[i] = num; 
	}

	//*** Separating out even number from array elements***
	printf("\n\n");
	printf("Even number Amongst The array elements are : \n\n");
	for (i = 0; i < NUM_ELEMENTS; i++)
	{
		if ((iArray[i] % 2) == 0)
			printf("%d\n", iArray[i]);
	}

	// *** Separating out odd numbers from array elements ***
	printf("\n\n");
	printf("odd NUmbers Amongst the array elemenrts are : \n\n");
	for (i = 0; i < NUM_ELEMENTS; i++)
	{
		if ((iArray[i] % 2) != 0)
			printf("%d\n", iArray[i]);
	}

	return(0);

}