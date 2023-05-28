#include<stdio.h>
int main(void)
{
	//varibale declarations 
	int hbl_num;

	//code 
	printf("Harshal Lakare \n\n");
	printf("\n\n");

	printf("Enter Vlaue For 'num' : ");
	scanf("%d", &hbl_num);

	//IF - ELSE - IF Ladder Begains from here ... 
	if (hbl_num < 0)
		printf("Num = %d Is less than 0 (Negative) !!!\n\n", hbl_num);

	else if ((hbl_num > 0) && (hbl_num <= 100))
		printf("Num = %d Is Between 0 and 100 !!!\n\n", hbl_num);

	else if ((num > 100) && (num <= 200))
		printf("NUm = %d Is Between 100 and 200 !!!\n\n", hbl_num);

	else if ((num > 200) && (num <= 300))
		printf("Num = %d Is Between 200 and 300 !!!\n\n", hbl_num);

	else if ((num > 300) && (num <= 400))
		printf("Num = %d Is Between 300 and 400 !!!\n\n", hbl_num);

	else if ((num > 400) && (num <= 500))
		printf("Num = %d Is Between 400 and 500 !!!\n\n", hbl_num);

	else if (hbl_num > 500)
		printf("Num = %d Is greater Than 500 !!!\n\n", hbl_num);

	else // *** This is the terminating 'ELSE' of this 'IF - ELSE IF - ELSE' Ladder !!! ***
		printf("Invalid Value Entered !!!\n\n");

	return(0);

}