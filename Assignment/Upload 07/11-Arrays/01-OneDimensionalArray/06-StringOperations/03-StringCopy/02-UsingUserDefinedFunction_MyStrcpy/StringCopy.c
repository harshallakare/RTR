#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	// functoin protoype 
	void MyStrcpy(char[] , char []);

	//variable declarations 
	char chArray_Original[MAX_STRING_LENGTH], chArray_Copy[MAX_STRING_LENGTH]; // A Character Array Is A string 

	//code 

	// *** String input ***
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	printf("Enter A string \n\n");
	gets_s(chArray_Original, MAX_STRING_LENGTH);

	// *** String Copy***
	MyStrcpy(chArray_Copy, chArray_Original); 

	// *** String Output ***
	printf("\n\n");
	printf("The Original String Entred by you (ie : 'chArray_Original[]' Is : )\n\n");
	printf("%s\n", chArray_Original);

	printf("\n\n");
	printf("The Copied String (ie : 'chArray_Copy[]' Is : \n\n)");
	printf("%s\n", chArray_Copy);

	return(0);
}

void MyStrcpy(char str_destination[], char str_source[])
{
	//function prototype 
	int MyStrlen(char[]);

	//variable declarations 
	int iStringLenght = 0; 
	int j; 

	//code 
	iStringLenght = MyStrlen(str_source); 
	for (j = 0; j < iStringLenght; i++)
		str_destination[j] = str_source[j]; 

	str_destination[j] = '\0'; 
}

int MyStrlen(char str[])
{
	//variable declarations 
	int j; 
	int string_lenght = 0; 

	//code 
	// *** Determining exact length of the string, by detecting the first occurence of null-terminating character (\0) ***
	for (j = 0; j < MAX_STRING_LENGTH; j++)
	{
		if (str[j] == '\0')
			break;
		else
			string_lenght++;
	}
	return(string_lenght);
}