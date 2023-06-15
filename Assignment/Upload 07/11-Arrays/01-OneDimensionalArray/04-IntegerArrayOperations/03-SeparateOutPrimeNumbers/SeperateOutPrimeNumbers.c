#include<stdio.h>

#define NUM_ELEMENTS 10; 

int main(void)
{
	//variable declaration 
	//int NUM_ELEMENTS; 
	int iArray[NUM_ELEMENTS];
	int i, num, count = 0; 

	//code 
	printf("Harshal Lakare \n\n");
	printf("\n\n");

	// *** Array Elements input ***
	printf("Enter Interger Elements For array : \n\n");
	for (i = 0; i < NUM_ELEMENTS; i++)
	{
		scanf("%d", &num);

		//if 'num' is negative (< 0 ), then convert it to positive (multiply by -1 )
		if (num < 0)
			num = -1 * num; 
		
		iArray[i] = num; 
	}
	// *** Printing entire Array ***
	printf("\n\n");
	printf("Array Element are : \n\n");
	for (i = 0; i < NUM_ELEMENTS; i++)
		printf("%d\n", iArray[i]);

	//*** Separating out even number from array element ***
	printf("\n\n");
	printf("Prime number amongst the array element are : \n\n");
	for (i = 0; i <= NUM_ELEMENTS; i++)
	{
		for (j = 1; j <= iArray[i]; j++)
		{
			if ((iArray[i] % j) == 0)
				count++;
		}


		//Number 1 is Neither a prime number no a constant 
		//If A number is prime , its only divisiable by 1 and itself 
		//Hence if a number is prime, the value of 'count' will be exactly 2. 
		//if the vlaue of 'count' is greater than 2 , the number is divisiable by numbers other than 1 and itself and hence, it is not prime 
		//The Vlaue of 'count' will be 1 only if iarray[i] is 1.

		if (count == 2)
			printf("%d\n", iArray[i]);
		
		count = 0; //Reset 'count' to 0 for checking the next number 
	}

	return(0);
}