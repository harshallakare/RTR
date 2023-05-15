#include<stdio.h>
int main(void)
{
	//code
	printf("Harshal Lakare \n\n");
	printf("****************************************************************************************************");
	printf("\n\n");
	printf("Hello World!!!\n\n");

	int a = 13; 
	printf("Interget Decimal Value Of 'a' = %d\n",a);
	printf("Interget Octal Value Of 'a' = %o\n", a);
	printf("Interget Hexadecimal Value Of 'a' (Hexadecimal Letter In Lower Case) = %x\n", a);
	printf("Interget Hexadecimal Value Of 'a' (Hexadecimal Letter In Lower Case) = %X\n", a);

	char ch = 'A';
	printf("Character ch = %c\n",ch);
	char str[] = "AstroMediComp's Rea; Time Rednering Batch";
	printf("String str = %s\n\n",str);

	long num = 30121995L;
	printf("Long Interget = %ld\n\n",num);

	unsigned int b = 7; 
	printf("Unsigned INterget 'b' = %u\n\n",b);

	float f_num = 3012.1995f;
	printf("Floating Point Number with Just %%f 'f_num' = %f\n", f_num);
	printf("Floating Point Number with %%4.2f 'f_num' = %4.2f\n", f_num);
	printf("Floating Point Number with %%6.5f 'f_num' = %6.5f\n", f_num);

	double d_pi = 3.14159265358979323846;
	printf("Double Precision Floating floting Point Number Without Exponential = %g\n", d_pi);
	printf("Double Precision Floating floting Point Number With Exponential (Lower Case ) = %e\n", d_pi);
	printf("Double Precision Floating floting Point Number With Exponential (Upper Case ) = %E\n", d_pi);
	printf(" Double Hexadecimal Value of 'd_pi' (Hexadecimal Letters In Upper Case) = %A\n\n", d_pi);

	printf("****************************************************************************************************");
	printf("\n\n");
	return(0);
	
}
