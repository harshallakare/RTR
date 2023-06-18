#include<stdio.h>
#include<string.h> //for strrev()

#define MAX_STRING_LENGTH 512

int main(void)
{
	//variable declarations 
	char chArray_Original[MAX_STRING_LENGTH]; // A Character Array Is A strinng 

	//code 

	// *** String Input ***
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	printf("Enter A string : \n\n");

	//*** String Output ***
	printf("\n\n");
	printf("The Orignial String Entered By you (ie : 'chArray_Original[]') Is : \n\n"); 
	printf("%s\n", chArray_Original);

	printf("\n\n");
	printf("The Reversed String (ie : 'chArray_Reverse[]') is :\n\n");
	printf("%s\n", strrev(chArray_Original));

	return(0);
}