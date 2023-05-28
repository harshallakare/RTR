#include<stdio.h>

int main(void)
{
	//varibale declarations 
	int num_month;

	//code 
	printf("Harshal Lakare \n\n");
	printf("\n\n");

	printf("Enter Number of Month (1 to 12) : ");
	scanf("%d", &num_month);

	printf("\n\n");
	
	//IF-ELSE - IF Ladder Begains from here....

	if (num_month == 1) // like 'case 1 '
		printf("Month Number %d Is January !!!\n\n", num_month);

	else if (num_month == 2) //like 'case 2'
		printf("Month Number %d is Februry !!!\n\n", num_month);

	else if (num_month == 3) //like 'case 3'
		printf("Month Number %d is March !!!\n\n", num_month);

	else if (num_month == 4) //like 'case 4'
		printf("Month Number %d is April !!!\n\n", num_month);

	else if (num_month == 5) //like 'case 5'
		printf("Month Number %d is May !!!\n\n", num_month);

	else if (num_month == 6) //like 'case 6'
		printf("Month Number %d is June !!!\n\n", num_month);

	else if (num_month == 7) //like 'case 7'
		printf("Month Number %d is Junly !!!\n\n", num_month);

	else if (num_month == 8) //like 'case 8'
		printf("Month Number %d is August !!!\n\n", num_month);

	else if (num_month == 9) //like 'case 9'
		printf("Month Number %d is September !!!\n\n", num_month);

	else if (num_month == 10) //like 'case 10'
		printf("Month Number %d is October !!!\n\n", num_month);

	else if (num_month == 11) //like 'case 11'
		printf("Month Number %d is November !!!\n\n", num_month);

	else if (num_month == 12) //like 'case 12'
		printf("Month Number %d is December !!!\n\n", num_month);

	else // like 'default' ... just like 'default' is optinal in switch-case so is 'else' in the if-else if-else ladder...
		printf("Invalid Month Number %d Entered !!! Please try again... \n\n", num_month);

	printf("If- - else if - else ladder complete !!!\n");

	return(0);

}