#include<stdio.h>
int main(void)
{
	//variable declaration 
	int hbl_num;

	//code 
	printf("Harshal Lakare \n\n");
	printf("\n\n");

	printf("Enter Value For 'Num' : ");
	scanf("%d", &hbl_num);

	if (hbl_num < 0)
	{
		printf("Num = %d Is Less Than 0 (NeGATIVE). \n\n", hbl_num);
	}

	if ((hbl_num > 0) && (hbl_num <= 100))
	{
		printf("Num = %d Is Between 0 ANd 100 \n\n", hbl_num);
	}

	if ((hbl_num > 100) && (hbl_num <= 200))
	{
		printf("Num = %d is Between 100 and 200. \n\n", hbl_num);
	}

	if ((hbl_num > 200) && (hbl_num <= 300))
	{
		printf("Num = %d Is Between 200 And 300. \n\n", hbl_num);
	}

	if ((hbl_num > 300) && (hbl_num <= 400))
	{
		printf("Num = %d Is Between 300 And 400. \n\n", hbl_num);
	}

	if ((hbl_num > 400) && (hbl_num <= 500))
	{
		printf(" Num = %d Is Between 400 And 500. \n\n", hbl_num);
	}

	if (hbl_num > 500)
	{
		printf("Num = %d Is Greater than 500. \n\n", hbl_num);
	}

	return(0);

}