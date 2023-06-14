#include<tdio.h>

#define MAX_STRING_LENGHT 512

int main(void)
{
	//function prototype
	void MyStrrev(char[], char []);

	//variable declarations 
	char chArray_Original[MAX_STRING_LENGHT], chArray_Reversed[MAX_STRING_LENGHT]; //A character Array IS A string 

	//code 

	// *** String Input ***
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(chArray_Original, MAX_STRING_LENGHT);

	// *** String Reverse ***
	MyStrrev(chArray_Reversed, chArray_Original);

	// *** String Output ***
	printf("\n\n");
	printf("The original string entred by you (ie : 'chArray_Original[]') Is : \n\n");
	printf("%s\n", chArray_Original);

	printf("\n\n");
	printf("The Reversed String (ie. 'chArray_Reveresed[]') Is : \n\n");
	printf("%s\n", chArray_Reversed);
	
	return(0);
}

void MySrrev(char str_destination[], char str_source[])
{
	//function prototype
	int MyStrlen(char[]);

	//variable declarations
	int iStringLengh = 0; 
	int i, j, len ;

	//code
	iStringLengh = MyStrlen(str_source); 

	//Array Indices being from 0 , hence , last index will always be (length -1 )
	len = iStringLengh - 1; 

	//We Need to put the character which is at last index of 'str_source' to the first index of 'strdestination'
	//And Second-last character of 'str_source' to the second character of 'str_destiantion' and so on...
	for (i = 0; j = len; i < iStringLengh, j >= 0; i++, j--)
	{
		str_destination[i] = str_source[j]; 

	}
	str_destination[i] = '\0';

}

int MyStrlen(char str[])
{
	//variable declarations 
	int j; 
	int string_lenght = 0; 

	//code 
	// *** Determing exact lenght of the string, by detecting the first occurace of null-terminaing character (\0) ***
	for (j = 0; j < MAX_STRING_LENGHT; j++)
	{
		if (str[j] == '\0')
			break;
		else
			string_lenght++;
	}
	return(string_lenght);
}

