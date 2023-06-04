#include<stdio.h>
int main(void)
{
	//variable declarations 
	char option, ch = '\0'; 

	//code 
	printf("\n\n");
	printf("Harshal Lakare \n\n");
	
	printf("Once The infinite loop begins, Enter 'Q' or 'q' TO quit the infinite for loop : \n\n");
	printf("Enter 'Y' or 'y' To initiate User Controller Infinite Loop : ");
	printf("\n\n");
	option = getch();
	if (option == 'Y' || option == 'y')
	{
		while (1) //Infinite Loop
		{
			printf("In Loop....\n");
			ch = getch();
			if(ch == 'Q' || ch == 'q')
				break;// User Controller Exisiting From Infinite Loop
		}
		printf("\n\n");
		printf("Exitining user controllerd infinite loop...");
		printf("\n\n");
	}
	else 
		printf("You Mist press 'Y' or 'y' To Initate The USer controlled Infinite Loop....Please try again ....\n\n");
	
	return(0);			
}