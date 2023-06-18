#include<stdio.h>
int main(void)
{
	//variable declarations 
	int i_num, num, i;

	//code 
	printf("Harshal Lakare \n\n");
	printf("\n\n");

	printf("Enter An Interget Value From Which Iteration must Begin : \n\n");
	scanf("%d", &i_num);

	printf(" How Many Digits Do you want to print from %d Onwards > : \n\n", i_num);
	scanf("%d", &num);

	printf("Printing Digits %d to %d : \n\n", i_num, (i_num + num));

	i = i_num;
	do
	{
		printf("\t%d\n", i );
		i++; 
	} while (i <= (i_num + num));

	printf("\n\n");

	return(0);
}
