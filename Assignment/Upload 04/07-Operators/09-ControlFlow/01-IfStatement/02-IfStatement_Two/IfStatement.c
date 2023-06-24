#include<stdio.h>
int main(void)
{
	//variable Declarations 
	int hbl_age; 

	//code
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	printf("Enter Age : ");
	scanf("%d", &hbl_age);
	if (hbl_age >= 18)
	{
		printf("You Are Eligible For Voting !!!\n\n");
	}
	return(0);
}