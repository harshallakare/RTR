#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype 
	void MyStrcat(char[] , char [] );

	//variable declarations 
	char chArray_One[MAX_STRING_LENGTH], chArray_Two[MAX_STRING_LENGTH]; // A Character Array Is a String

	//code 

	// *** String Input ***
	printf("\n\n");
	printf("Enter First String : \n\n");
	gets_s(chArray_One, MAX_STRING_LENGTH);

	printf("\n\n");
	printf("Enter Second String : \n\n");
	gets_s(chArray_Two, MAX_STRING_LENGTH);

	// *** String Concat***
	printf("\n\n");
	printf("****** Before Concatenation ******");
	printf("\n\n");
	printf("The Original First String Entered By You (ie : 'chArray_One[]') Is : \n\n");
	printf("%s\n", chArray_One);

	printf("\n\n");
	printf("The Original Second String Entered By you (ie. 'chArray_Two[]') Is : \n\n");
	printf("%s\n", chArray_Two);

	MyStrcat(chArray_One, chArray_Two);

	printf("\n\n");
	printf("****** After concatenation ******");
	printf("\n\n");
	printf("'chArray_One[]' Is : \n\n");
	printf("%s\n", chArray_One);

	printf("\n\n");
	printf("chArray_Two[] Is : \n\n");
	printf("%s\n", chArray_Two);

	return(0);
}

void MyStrcat(char str_destination[], char str_source[])
{
	//function prototype 
	int MyStrlen(char[]);

	//variable declarations 
	int iStringLength_Source = 0, iStringLength_Destination = 0; 
	int i, j; 

	//code 
	iStringLength_Source = MyStrlen(str_source);
	iStringLength_Destination = MyStrlen(str_destination);

	//Array indices Begin from 0 , hence , last valid index of array will always be (length - 1 )
	//SO, Concatenation must begin from index number equal to length of the array 'str_destination'
	//We Need to put the character which is at first index of 'str_source' to the (Last index + 1 ) of 'str_destination'

	for (i = iStringLength_Destination, j = 0; j < iStringLength_Source; i++, j++)
	{
		str_destination[i] = str_source[j]; 
	}
	str_destination[i] = '\0'; 
}

int MyStrlen(char str[])
{
	//variable delarations 
	int j; 
	int string_length = 0; 

	//code 
	// **** Determiniting exact length of the string, by deteecting the first occurence of null-terminating character (\0) ****
	for (j = 0; j < MAX_STRING_LENGTH; j++)
	{
		if (str[j] == '\0')
			break;
		else
			string_length++;
	}
	return(string_length);
}