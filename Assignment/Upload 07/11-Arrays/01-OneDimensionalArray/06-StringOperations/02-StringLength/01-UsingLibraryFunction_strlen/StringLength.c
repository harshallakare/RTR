#include<stdio.h>

#define MAX_STRING_LENGHT 512

int main(void)
{
	//varaible declarations 
	char chArray[MAX_STRING_LENGHT]; //A character Array Is a string 
	int iStringLenght = 0; 

	//code 

	// *** String input ***
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	printf("Enter A string : \n\n");
	gets_s(chArray , MAX_STRING_LENGHT);

	// *** String Output ***
	printf("\n\n");
	printf("String Entered by You Is : \n\n");
	printf("%s\n", chArray);

	// *** String Lenght ***
	printf("\n\n");
	iStringLenght = strlen(chArray); 
	printf("Lenght Of String IS = %d Characters !!!\n\n", iStringLenght);

	return(0);
}