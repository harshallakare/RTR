#include<stdio.h>
int main(void)
{
	//variable declarations 
	int hbl_num;

	//code 
	printf("Harshal Lakare \n\n");
	printf("\n\n");

	printf("Enter Value For 'num'");
	scanf("%d", hbl_num);

	if (hbl_num < 0) // 'if' - 01 
	{
		printf("Num = %d Is Less Than 0 (NEGATIVE) !!!\n\n", &hbl_num);
	}
	else // 'else ' - 01
	{
		if ((hbl_num > 0) && (hbl_num <= 100)) // 'if' - 02 
		{
			printf("Num = %d is Between 0 And 100 !!!\n\n", hbl_num);
		}
		else // 'else' -02 
		{
			if ((hbl_num > 100) && (hbl_num <= 200)) // 'if' - 03 
			{
				printf("Num = %d IS between 100  and 200 !!!\n\n", hbl_num);
			}
			else // 'else' -03 
			{
				if ((hbl_num > 200) && (hbl_num <= 300)) //'if' -04 
				{
					printf("Num = %d Is between 200 and 300 !!!\n\n", &hbl_num);
				}
				else // 'else' - 04 
				{
					if ((hbl_num > 300) && (hbl_num <= 400)) // 'if' - 05
					{
						printf("Num = %d Is Between 300 And 400 !!!\n\n", &hbl_num);
					}
					else // 'else' -05
					{
						if ((hbl_num > 400) && (hbl_num <= 500)) // 'if' - 06
						{
							printf("Num = %d Is Between 400 and 500 !!!\n\n", &hbl_num);
						}
						else // 'else' - 06 
						{
							printf("Num = %d Is Greater than 500 !!!\n\n", &hbl_num);
						} // Closing brace of 'else' -06
					} // Closing brace of 'else' -05
				} // Closing brace of 'else' -04
			} // Closing brace of 'else' -03
		} // Closing brace of 'else' -02

	}// Closing brace of 'else' -01

	return(0);

}