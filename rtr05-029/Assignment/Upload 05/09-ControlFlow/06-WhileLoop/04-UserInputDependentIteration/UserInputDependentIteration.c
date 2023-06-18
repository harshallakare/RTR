#include<stdio.h>
int main(void)
{
	//variable declarations 
	int i_num,num,i;
	
	//code 
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	
	printf("Enter An Integer Vlaue from Which Iteration Must Begin : ");
	scanf("%d", &i_num);
	
	printf("How many Digitis Do you want to printf from %d Onwards ? : ", i_num);
	scanf("%d", &num);
	
	printf("Printing Digitis %d to %d : \n\n", i_num, (i_num + num));
	
	i = i_num; 
	while (i <= (i_num + num))
	{
		printf("\t%d\n",i);
		i++;
	}
	
	printf("\n\n");
	
	return(0);

}