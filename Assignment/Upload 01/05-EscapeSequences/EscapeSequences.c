#include<stdio.h>
int main(void)
{
	//code
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	printf("Demonstatating \t Horizontal \t Tab \t Using \t \\t Escape Sequence !!!\n\n");
	printf("\"This is A Double Quoptated Output\" Doing Using \\\" \\\" Escape Sequence \n\n" );
	printf("\ 'This Is a Single Quoted output\' Done Using \\\' \\\' Escape Sequence\n\n");
	printf("BACKSPACE Turned To BACKSPACE\b using Escape Sequence \\b\n\n");
	printf("\r Demonstrating Carriage Return Using \\r Escape Sequence \n");
	printf("Deomonstrating \r Carriage Return Using \\r Escape Sequence\n");
	printf("Demonstrating Carriage \r Return Using \\r Escape Sequence\n\n");
	printf("Demonstratating \x41 Using \\xhh Escape Sequence \n\n"); //0x41 Is The Hexadecimal Code For letter 'A'. 'xhh' Is the Place-holder For 'x' Followed by 2 digit(hh),altogether forming a Hexadecimal Number. 
	printf("Demonstrating \102 Using \\ooo Escape Sequence\n\n");//102 Is the Octal Number Code For Letter 'B'. 'ooo' Is the Place-holder for 3 Digits Forming Aa Octal Number.
	return(0);
}