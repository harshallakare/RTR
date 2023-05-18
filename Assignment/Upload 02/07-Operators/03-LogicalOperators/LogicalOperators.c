#include<stdio.h>

int main(void)
{
	//varible Declearation 
	int hbl_a;
	int hbl_b;
	int hbl_c;
	int hbl_result;

	printf("Harshal Lakare ");
	//code
	printf("\n\n");
	printf("Enter First Interger : ");
	scanf("%d", &hbl_a);

	printf("\n\n");
	printf("Enter Second Interger : ");
	scanf("%d", &hbl_b);

	printf("\n\n");
	printf("Enter Third Interger : ");
	scanf("%d", &hbl_c);

	printf("\n\n");
	printf("If Answer = 0 , It IS 'FALSE'. \n");
	printf("If Answer = 1 , It Is 'TRUE'.\n");

	hbl_result = (hbl_a <= hbl_b) && (hbl_b != hbl_c);
	printf("LOGICAL AND (&&) : ANswe IS TRUE (1) IF And Only If BOTH Conditions Are True. The ANswer Is FALSE (0), If Any One Or Both Conditions Are False\n\n");
	
	printf("hbl_A = %d IS Less Than Or Equal To hbl_B = %d AND hbl_B = %d Is not Equal To hbl_C = %d	\t Answer = %d\n\n", hbl_a, hbl_b, hbl_b, hbl_c, hbl_result);

	hbl_result = (hbl_b >= hbl_a) || (hbl_a == hbl_c);
	printf("LOGICAL OR (||) : Answer IS FALSE (0) IF ANd only IF BOTH Conditiaons are flase. The Answer is TRUE (1), IF Any One Or Bothe Conditions Are True\n\n ");
	printf("Eithert hbl_B = %d Is gredater Than Or Equal TO hbl_A = %d OR hbl_A = %d Is Equal To hbl_C = %d \t Answer = %d\n\n", hbl_b, hbl_a, hbl_a, hbl_c, hbl_result);

	hbl_result = !hbl_a;
	printf("hbl_A = %d And Using Logical NOT (!) Operator on hbl_A Gives Result = %d\n\n", hbl_a, hbl_result);

	hbl_result = !hbl_b;
	printf("hbl_B = %d And Using Logical NOT (!) Operator on hbl_B Gives Result = %d\n\n", hbl_b, hbl_result);

	hbl_result = !hbl_c;
	printf("hbl_C = %d And Using Logical NOT (!) Operator on hbl_C Gives REsult = %d\n\n", hbl_c, hbl_result);

	hbl_result = (!(hbl_a <= hbl_b) && !(hbl_b != hbl_c));
	printf("Using Logical NOT (!) On (a <= b) And ALso on (hbl_b != hbl_c) And then ANDing Them Afterwards Gives Result = %d\n", hbl_result);

	printf("\n\n");

	hbl_result = !((hbl_b >= hbl_a) || (hbl_a == hbl_c));
	printf("Using Logical Not (!) On Entire Logical Expression (hbl_b >= hbl_a) || (hbl_a == hbl_c) Gives Result = %d\n", hbl_result);

	printf("\n\n");
	
	return(0);
}
