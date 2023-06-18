#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//variable declarations 
	char chArray_Original[MAX_STRING_LENGTH], chArry_Copy[MAX_STRING_LENGTH]; //A Character Array Is A string 

	//code 

	// *** String Input ***
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	printf("Enter A string \n\n");
	gets_s(chArray_Original, MAX_STRING_LENGTH);

	// *** String Copy***
	strcpy(chArry_Copy, chArray_Original);

	// *** String Output ***
	printf("\n\n");
	printf("The Original String Entered by you (ie : 'chArray_Original[]') is : \n\n");
	printf("%s\n", chArray_Original);

	printf("\n\n");
	printf("The Copied String (ie: 'chArray_Copy[]') Is : \n\n");
	printf("%s\n", chArry_Copy);
	
	return(0);
}