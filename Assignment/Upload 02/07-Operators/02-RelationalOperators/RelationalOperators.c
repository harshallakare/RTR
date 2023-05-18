#include<stdio.h>

int main(void)
{
	//varibale declaration 
	int hbl_a;
	int hbl_b;
	int hbl_result;

	printf("Harshal Lakare\n\n");
	//code
	printf("\n\n");
	printf("Enter ONe Integer : ");
	scanf("%d", &hbl_a);

	printf("\n\n");
	printf("Enter Another Interger : ");
	scanf("%d", &hbl_b);

	printf("\n\n");
	printf("If Answer = 0, It is 'FALSE'. \n");
	printf("If Answer = 1, It Is 'TRUE'.\n\n");

	hbl_result = (hbl_a < hbl_b);
	printf("(hbl_a < hbl_b)  hbl_A = %d IS Greater Than hbl_B = %d					\t Answer = %d\n", hbl_a, hbl_b, hbl_result);

	hbl_result = (hbl_a >= hbl_b);
	printf("(hbl_a > hbl_b)  hbl_A = %d Is Greater Than hbl_B = %d					\t Answer = %d\n", hbl_a, hbl_b, hbl_result);

	hbl_result = (hbl_a <= hbl_b);
	printf("(hbl_a <= hbl_b) hbl_A = %d Is less than or equal to hbl_B = %d			\t\t Answer = %d\n", hbl_a, hbl_b, hbl_result);

	hbl_result = (hbl_a >= hbl_b);
	printf("(a >= b) hbl_A =%d Is Greater than Or Equeal To hbl_B %d		\t\t\t Answer = %d\n", hbl_a, hbl_b, hbl_result);

	hbl_result = (hbl_a == hbl_b);
	printf("(hbl_a == hbl_b) hbl_A =%d Is Equal To hbl_b = %d						\t Answer = %d\n", hbl_a, hbl_b, hbl_result);

	hbl_result = (hbl_a != hbl_b);
	printf("(hbl_a != hbl_b) hbl_A = %d Is not Equal To hbl_B = %d					\t Answer = %d\n", hbl_a, hbl_b, hbl_result);

	return(0);

}