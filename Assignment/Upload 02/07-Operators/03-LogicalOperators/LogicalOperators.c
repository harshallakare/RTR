#include<stdio.h>

int main(void)
{
	//varible Declearation 
	int a;
	int b;
	int c;
	int result; 

	printf("Harshal Lakare ");
	//code
	printf("\n\n");
	printf("Enter First Interger : ");
	scanf("%d", &a);

	printf("\n\n");
	printf("Enter Second Interger : ");
	scanf("%d", &b);

	printf("\n\n");
	printf("Enter Third Interger : ");
	scanf("%d", &c);

	printf("\n\n");
	printf("If Answer = 0 , It IS 'FALSE'. \n");
	printf("If Answer = 1 , It Is 'TRUE'.\n");

	result = (a <= b) && (b != c);
	printf("LOGICAL AND (&&) : ANswe IS TRUE (1) IF And Only If BOTH Conditions Are True. The ANswer Is FALSE (0), If Any One Or Both Conditions Are False\n\n");
	
	printf("A = %d IS Less Than Or Equal To B = %d AND B = %d Is not Equal To C = %d	\t Answer = %d\n\n", a, b, b, c, result);

	result = (b >= a) || (a == c);
	printf("LOGICAL OR (||) : Answer IS FALSE (0) IF ANd only IF BOTH Conditiaons are flase. The Answer is TRUE (1), IF Any One Or Bothe Conditions Are True\n\n ");
	printf("Eithert B = %d Is gredater Than Or Equal TO A = %d OR A = %d Is Equal To C = %d \t Answer = %d\n\n", b, a, a, c, result);

	result = !a; 
	printf("A = %d And Using Logical NOT (!) Operator on A Gives Result = %d\n\n", a, result);

	result = !b;
	printf("B = %d And Using Logical NOT (!) Operator on B Gives Result = %d\n\n",b, result);

	result = !c; 
	printf("C = %d And Using Logical NOT (!) Operator on C Gives REsult = %d\n\n", c, result);

	result = (!(a <= b) && !(b != c)); 
	printf("Using Logical NOT (!) On (a <= b) And ALso on (b != c) And then ANDing Them Afterwards Gives Result = %d\n", result);

	printf("\n\n");

	result = !((b >= a) || (a == c));
	printf("Using Logical Not (!) On Entire Logical Expression (b >= a) || (a == c) Gives Result = %d\n", result);

	printf("\n\n");
	
	return(0);
}
