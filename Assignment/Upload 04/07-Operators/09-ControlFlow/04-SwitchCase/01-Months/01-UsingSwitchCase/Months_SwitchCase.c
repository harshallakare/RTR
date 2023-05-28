#include<stdio.h>
int main(void)
{
	//bariable declarations 
	int num_month;

	//code 
	printf("Harshal Lakare \n\n");
	printf("\n\n");

	printf("Enter Number Of Month (1 to 12) :");
	scanf("%d", &num_month);

	printf("\n\n");

	switch (num_month)
	{
	case 1://like 'if'
		printf("Month Number %d Is JANUARY !!!\n\n", num_month);
		break;
	case 2: //like 'else if'
		printf("Month Number %d Is FEBRUARY !!!\n\n", num_month);
		break;

	case 3: //like 'else if'
		printf("Month Number %d Is March !!!\n\n", num_month);
		break;

	case 4: //like 'else if'
		printf("Month Number %d Is April !!!\n\n", num_month);
		break;

	case 5: //like 'else if'
		printf("Month Number %d Is May !!!\n\n", num_month);
		break;

	case 6: //like 'else if'
		printf("Month Number %d Is June !!!\n\n", num_month);
		break;

	case 7: //like 'else if'
		printf("Month Number %d Is July !!!\n\n", num_month);
		break;

	case 8: //like 'else if'
		printf("Month Number %d Is August !!!\n\n", num_month);
		break;

	case 9: //like 'else if'
		printf("Month Number %d Is September !!!\n\n", num_month);
		break;

	case 10: //like 'else if'
		printf("Month Number %d Is October !!!\n\n", num_month);
		break;

	case 11: //like 'else if'
		printf("Month Number %d Is November !!!\n\n", num_month);
		break;

	case 12: //like 'else if'
		printf("Month Number %d Is December !!!\n\n", num_month);
		break;

	default: //Like Ending Optinal 'else' ... justr like terminating 'else' is optional in if-else if-else ladder, so is the default case optinal in switch-case 
		printf("Invalid Month Number %d Enterred !!! Please try again....\n\n", num_month);
		break;
	}	
	printf("Switch Case block is completed !!!\n");
	
	return(0);
}