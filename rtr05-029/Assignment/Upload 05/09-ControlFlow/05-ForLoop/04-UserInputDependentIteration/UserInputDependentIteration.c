#include<stdio.h>
int main(void)
{
	//variable declarations 
	int i_num, num, i;
	
	//code 
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	
	printf("Enter An interge value frmo which iteration Must Begin : ");
	scanf("%d", &i_num);
	
	printf("How many digits do you want to print from %d Onwards ? : ", i_num);
	scanf("%d", &num);
	
	printf("Printing Digits %d to %d : \n\n", i_num, (i_num + num));
	
	for (i = i_num ; i <= (i_num + num); i++)
	{
		printf("\t%d\n",i);
		
	}
	printf("\n\n");
	
	return(0);
}