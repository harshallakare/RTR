#include<stdio.h>

int main(void)
{
	//varibale declarations 
	int hbl_i, hbl_j;
	char hbl_ch_01, hbl_ch02; 

	int hbl_a, hbl_result_int;
	float hbl_f, hbl_result_float;

	int hbl_i_explicit;
	float hbl_f_explicit;

	//code
	printf("Harshal Lakare\n\n");
	printf("\n\n");

	//Interconversion and Implicit TYPE-CASTING between 'char' and 'int' types....
	hbl_i = 70; 
	hbl_ch_01 = hbl_i; 
	printf("I = %d\n", hbl_i);
	printf("Character 1 (after hbl_ch_01 = i) = %c\n\n",hbl_ch_01);

	hbl_ch02 = 'Q';
	hbl_j = hbl_ch02;
	printf("Charater 2 = %c\n", hbl_ch02);
	printf("J (after j = hbl_ch_02) = %d\n\n",hbl_j);

	//Implicit Conversion of 'int' to 'float'....
	hbl_a = 5; 
	hbl_f = 7.8f;
	hbl_result_float = hbl_a + hbl_f;
	printf("Interger a = %d And Flaoting-Point Number %f Added Gives Flaoting-Point Sum =%f\n\n", hbl_a, hbl_f, hbl_result_float);

	hbl_result_int = hbl_a + hbl_f; 
	printf("Integer a = %d And Floating-Point Number %f Added Gives Interger Sum = %d\n\n", hbl_a, hbl_f,hbl_result_int);

	//EXplicit type-casting using cast operator....
	hbl_f_explicit = 30.121995f; 
	hbl_i_explicit = (int)hbl_f_explicit; 
	printf("Floating Point Number Which Will be type Casted Explicity = %f\n", hbl_f_explicit);
	printf("Resultant Intergfer after Explicit type Casting Of %f = %d\n\n", hbl_f_explicit, hbl_i_explicit);

	return(0);
}

