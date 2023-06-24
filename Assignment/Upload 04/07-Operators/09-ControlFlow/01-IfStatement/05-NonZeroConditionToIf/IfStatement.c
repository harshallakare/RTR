#include<stdio.h>
int main(void)
{
	//variable declaratoins 
	int hbl_a;

	//code
	printf("\n\n");

	hbl_a = 5;
	if (hbl_a) //Non Zero Positive Value 
	{
		printf("if-block 1 : 'A' Exist ANd Has Value = %d !!!\n\n",hbl_a);
	}
	
	hbl_a = -5;
	if (hbl_a) //Non-Zero Negative Value 
	{
		printf("if-block 2 : 'A' Exist And Has Value = %d !!!\n\n",hbl_a);
	}
	
	hbl_a = 0;
	if (hbl_a) // Zero Value 
	{
		printf("if-block 3 : 'A' Exists And Has Value = %d !!!\n\n",hbl_a);
	}

	printf("All Three if-statement Are Done !!!\n\n");
}