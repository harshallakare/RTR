#include<stdio.h>
int main(void)
{
	//varaible declarations 
	int hbl_a, hbl_b, hbl_p;
	
	//code 
	hbl_a = 9;
	hbl_b = 30;
	hbl_p = 30;

	// *** FIRST if else PAIR ***
	printf("\n\n");
	if (hbl_a < hbl_b)
	{
		printf("Entering First if-block...\n\n");
		printf("A is Less Than B !!!\n\n");
	}
	else
	{
		printf("Entering First else-block...\n\n");
		printf("A is NOT Less Than B !!!\n\n");
	}
	printf("First if-else Pair Done !!!\n\n");

	// *** SECOND if-else PAIR
	printf("\n\n");
	if (hbl_b != hbl_p)
	{
		printf("Entering Seconf if-block...\n\n");
		printf("B is NOT Equal to P !!!\n\n");
	}
	else
	{
		printf("Entering Seconf else-block...\n\n");
		printf("B Is Equal to P !!!\n\n");
	}
	printf("Second if-else Pair Done !!!\n\n");

	return(0);
}