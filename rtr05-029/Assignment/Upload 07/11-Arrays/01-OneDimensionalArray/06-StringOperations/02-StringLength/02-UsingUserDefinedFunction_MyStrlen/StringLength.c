#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function protoype 
	int MyStrlen(char[]);

	//variable declarations 
	char chArray[MAX_STRING_LENGTH]; //A character Array is a string 
	int iStringLength = 0; 

	//code 

	// *** String Input ***
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	printf("Eneter A string : \n\n");
	gets_s(chArray, MAX_STRING_LENGTH); 

	// *** String output***
	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", chArray);

	// *** String Length*** 
	printf("\n\n");
	iStringLength = MyStrlen(chArray); 
	printf("Lenght Of String Is = %d characters !!!\n\n", iStringLength);

	return(0);
}

int MyStrlen(char str[])
{
	//varaible declarations 
	int j; 
	int string_lenght = 0; 

	//code 
	// *** Determinging exact lenght of the string, by detecting the first occurence of null-terminating character (\0) ***
	for (j = 0; j < MAX_STRING_LENGTH; j++)
	{
		if (str[j] == '\0')
			break;
		else
			string_lenght++;
	}
	return(string_lenght);
}