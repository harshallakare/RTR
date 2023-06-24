#include<stdio.h>
int main(void)
{
	//varible declration 
	int hbl_num;

	//code 
	printf("Harshal Lakare \n\n");
	printf("\n\n");

	printf("Enter Value For 'num' : ");
	scanf("%d", &hbl_num);

	//IF-ELSE - IF Ladder begains from here....
	if (hbl_num < 0)
		printf("Num =%d Is Less Than 0 (Negative) !!!\n\n", hbl_num);

	else if ((hbl_num > 0) && (hbl_num <= 100))
		printf("Num = %d Is Between 0 And 100 !!!\n\n", hbl_num);

	else if ((hbl_num > 100) && (hbl_num <= 200))
		printf("Num = %d Is Between 100 and 200 !!! \n\n", hbl_num);

	else if ((hbl_num > 200) && (hbl_num <= 300))
		printf("Num = %d Is Between 200 ANd 300 !!! \n\n", hbl_num);

	else if ((hbl_num > 300) && (hbl_num <= 400))
		printf("Num = %d Is Between 300 ANd 400 !!!\n\n", hbl_num);

	else if ((hbl_num > 400) && (hbl_num <= 500))
		printf("Num = %d Is between 400 and 500 !!!\n\n", hbl_num);

	else if (hbl_num > 500)
		printf("Num = %d Is Greater than 500 !!!\n\n", hbl_num);

	// *** No Terminating 'Else' in this ladder !!! *** 

	return(0);
}
