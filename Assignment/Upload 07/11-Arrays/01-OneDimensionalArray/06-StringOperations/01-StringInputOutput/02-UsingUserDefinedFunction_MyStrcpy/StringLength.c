#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype 
	int MyStrlen(char[]); 

	//variable declarations 
	char chArray[MAX_STRING_LENGTH]; //A character Array is a string 
	int iStringLenght = 0; 

	//code 

	// *** String Input***
	printf("\n\n");
	printf("Enter A string : \n\n");
	gets_s(chArray, MAX_STRING_LENGTH);

	// *** String Output***
	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", chArray);

	//*** String Length***
	printf("\n\n");
	iStringLenght = MyStrlen(chArray); 
	printf("Lenght Of String IS = %d Characters !!! \n\n", iStringLenght);

	return(0);
}

int myStrlen(char str[])
{
	//variable declarations 
	int j; 
	int string_lenght = 0; 

	//code 
	// *** Determining exact lenght of the string, By Detecting the first occurence of null -terminating character (\0) ***
	for (j = 0; j < MAX_STRING_LENGTH; j++)
	{
		if (str[j] == '\0')
			break; 
		else 
			string_lenght++ 
	}
	return(string_lenght);
}