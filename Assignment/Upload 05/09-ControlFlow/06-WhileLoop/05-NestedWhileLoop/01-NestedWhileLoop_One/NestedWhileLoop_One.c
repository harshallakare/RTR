#include<stdio.h>
int main(void)
{
	//varibale declarations 
	int i, j;

	//code 
	printf("Harshal Lakare \n\n");
	printf("\n\n");

	i = 1;
	while (i <= 10)
	{
		printf("i = %d\n", i);
		printf("--------\n\n");

		j = 1; 
		while (j <= 5)
		{
			printf("\tj = %d\n", j);
			j++;
		}
		i++;
		printf("\n\n");

	}

}