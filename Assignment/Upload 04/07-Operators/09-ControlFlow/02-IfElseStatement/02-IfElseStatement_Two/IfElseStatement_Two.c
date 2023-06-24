#include<stdio.h>
int main(void)
{
	//variable Declarations 
	int hbl_age;

	//code 
	printf("Harshal Lakre \n\n");
	printf("\n\n");
	printf("Enter Age : ");
	scanf("%d", &hbl_age);
	printf("\n\n");
	if (hbl_age >= 18)
	{
		printf("Entering if-block...\n\n");
		printf("You are Eligible for Voting !!!\n\n");
	}
	else
	{
		printf("Entering else-block...\n\n");
		printf("You are NOT Eligible For Voting !!!\n\n");
	}
	printf("Bye !!!\n\n");
	return(0);
}