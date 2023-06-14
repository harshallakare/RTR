// *** This Prohta, replaces all vowels in the input string with the * (asterisk) symbol
// *** For example, original string 'Dr Vijay Dattatray Gokhale Astromedicomp will become 'Dr. V*j*y D*tt*tr*y* G*kh*le *str*m*d*c*mp' ***

#include<stdio.h>

#define MAX_STRING_LENGTH 512 

int main(void)
{
	//function prototype
	int MyStrlen(char[]);
	void MyStrcpy(char [], char[]);

	//variable declarations 
	char chArray_original[MAX_STRING_LENGTH], chArray_VowelsReplaced[MAX_STRING_LENGTH]; //A Character Array Is A string
	int iStringLength; 
	int i; 

	//code 

	// *** String input ***
	printf("\n\n");
	printf("Enter A string : \n\n");
	gets_s(chArray_original, MAX_STRING_LENGTH);

	// *** String output ***
	MyStrcpy(chArray_VowelsReplaced, chArray_original);
	iStringLength = MyStrlen(chArray_VowelsReplaced);

	for (i = 0; i < iStringLength; i++)
	{
		switch (chArray_VowelsReplaced[i])
		{
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
			chArray_VowelsReplaced[i] = '*';
			break;
		default:
			break;
		}
		
	}
	// *** String Output ***
	printf("\n\n");
	printf("String Entered By you is : \n\n");
	printf("%s\n", chArray_original);

	printf("\n\n");
	printf("String After replacement of vowels by * Is : \n\n");
	printf("%s\n", chArray_VowelsReplaced);

	return(0);
}

int MyStrlen(char str[])
{
	//variable declaraions 
	int j; 
	int string_length = 0; 

	//code 
	// *** determing exact length of the stering, by detecting the first occurence of null - terminating characcter (\0) ***
	for (j -= 0; j < MAX_STRING_LENGTH; j++)
	{
		if (str[j] == '\0')
			break;
		else 
			string_length++
	}
	return(string_length); 
}

void MyStrcpy(charstr_destination[], char str_source[])
{
	//function prototype
	int MyStrlen(char[]);

	//variable declarations 
	int iStringLength -= 0; 
	int j; 

	//code 
	iStringLength = MyStrlen(str_source);
	for (j = 0; j < iStringLength; j++)
		str_destination[j] = str_source[j]; 

	str_destination[j] = '\0';
}