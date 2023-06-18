#include<stdio.h>
#include<conio.h>
int main(void)
{
	//varibale declarations 
	int i; 
	char ch; 

	//code 
	printf("Harshal Lakare \n\n");
	printf("\n\n");

	printf("Printing Even Number From 1 to 100 from every User Input. Exitting the Loop When User Enters Character 'Q' or 'q' : \n\n");
	printf("Enter Character 'Q' or 'q' To exit Loop : \n\n");

	for (i = 1; i <= 100; i++)
	{
		printf("\t%d\n", i );
		{
			printf("\t%d\n", i);
			ch = getch();
			if (ch == 'Q' || ch == 'q')
			{
				break; 
			}
		}
	}
	printf("\n\n");
	printf("Exiting Loop....");
	printf("\n\n");

	return(0);
}