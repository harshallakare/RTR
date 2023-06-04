#include<stdio.h>
int main(void)
{
	//variable declarations 
	char option, ch = '\0'; 

	//code 
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	printf("Once THe Infinite Loop Begains, Enter 'Q' or 'q' To quit the Inifinte for loop: \n\n");

	do
	{
		do 
		{
			printf("\n\n");
			printf("In Loop ....\n\n");
			ch = getch(); //control flow waits for character input 
		} while (ch != 'Q' && ch != 'q');
		printf("\n\n");
		printf("Exiting User Contrlled Infinite loop...\n\n");

		printf("\n\n");
		printf("Do you want to begin user contrllled infinite loop again?....(Y/y - Yes, ANy Other Key - No) : \n\n");
		option = getch();
	} while (option == 'Y' || option == 'y');
	
	return (0);

}
