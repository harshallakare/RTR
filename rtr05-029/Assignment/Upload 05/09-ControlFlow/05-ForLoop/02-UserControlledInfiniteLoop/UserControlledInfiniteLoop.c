#include<stdio.h>
int main(void)
{
	//variable declarations 
	char option, ch = 0; 

	//code 
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	printf("Once The Infinite Loop Beging, Enter 'Q' or 'q' To Quit The Infinite For Loop : \n\n");

	printf("Enter 'Y' or 'y' To Initiate User Contrlled Infinite Loop : ");
	printf("\n\n");
	option = getch();
	if (option == 'Y' || option == 'y')
	{
		for(;;) //Infinite loop
		{
			printf("In Loop...\n");
			ch = getch();
			if (ch == 'Q' || ch == 'q')
				break; // user contrlled exiting from infinite loop
		}
	}

	printf("\n\n");
	printf("Exiting User controlled Infinite loop");
	printf("\n\n");

	return(0);
}