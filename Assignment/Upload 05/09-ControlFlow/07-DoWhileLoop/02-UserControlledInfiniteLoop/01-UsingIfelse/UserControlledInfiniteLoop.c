#include<stdio.h>
int main(void)
{
	//varaible declarations 
	char option, ch = '\0';

	//code 
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	printf("One the Infinite Loop Begins, Enter 'Q' or 'q' To Quit The Infinite For Loop : \n\n");
	printf("Enter 'Y'or 'y' To Initiare User Controlled Infinite Loop : ");
	printf("\n\n");
	option = getch();
	if (option == 'Y' || option == 'y')
	{
		do
		{
			printf("In Loop....\n");
			ch = getch(); //control flow waints for character input 
			if (ch == 'Q' || ch == 'q')
				break; // User Contrlled Exiting from Infinite Loop
		} while (1); //Infinite Loop
		printf("\n\n");
		printf("Exiting User Controlled infinite loop....");
		printf("\n\n");
	}
	else
		printf("You Must Press 'Y' or 'y' To Initate The User Controlled Infinite Loop...Please try again...\n\n");
	
	return(0);

}