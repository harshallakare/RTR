#include<stdio.h>

int main(void)
{
	//varabible declarations 
	int hbl_a, hbl_b;
	int hbl_p, hbl_q;
	char hbl_ch_result_01, hbl_ch_result_02;
	int hbl_i_result_01, hbl_i_result_02;

	//code 
	printf("Harshal Lakare\n\n");
	printf("\n\n");

	hbl_a = 7; 
	hbl_b = 5; 
	hbl_ch_result_01 = (hbl_a > hbl_b) ? 'A' : 'B';
	hbl_i_result_01 = (hbl_a > hbl_b) ? hbl_a : hbl_b;
	printf("Ternary Operator Answer 1 ----- %c and %d. \n\n", hbl_ch_result_01, hbl_i_result_01 );

	hbl_p = 30;
	hbl_q = 30;
	hbl_ch_result_02 = (hbl_p != hbl_q) ? 'P' : 'Q';
	hbl_i_result_02 = (hbl_p != hbl_q) ? hbl_p : hbl_q;
	printf("Ternary Operator Answer 2 ----- %c and %d. \n\n", hbl_ch_result_02, hbl_i_result_02);
	
	printf("\n\n");
	return(0);
}
