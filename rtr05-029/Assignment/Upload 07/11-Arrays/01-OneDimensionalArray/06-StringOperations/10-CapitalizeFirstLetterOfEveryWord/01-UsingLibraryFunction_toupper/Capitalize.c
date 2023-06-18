#include<stdio.h>
#include<ctype.h> //for topper()

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype 
	int MyStrlen(char[]);

	//variable declarations 
	char chArray[MAX_STRING_LENGTH], chArray_CapitalizedFirstLetterOfEverWord[MAX_STRING_LENGTH]; // A Character Array Is a string 
	int iStringLength;
	int i, j; 

	//code 

	// *** String Input ***
	printf("\n\n");
	printf("Enter A string : \n\n");
	gets_s(chArray, MAX_STRING_LENGTH);

	iStringLength = MyStrlen(chArray);
	j = 0; 
	for (i = 0; i < iStringLength; i++)
	{
		if (i == 0)
			chArray_CapitalizedFirstLetterOfEverWord[j] = toupper(chArray[i]);
		else if (chArray[i] == ' ')
		{
			chArray_CapitalizedFirstLetterOfEverWord[j] = chArray[i];
			chArray_CapitalizedFirstLetterOfEverWord[j + 1] = toupper(chArray[i + 1]);

			//Since, Already two characters (At Indices 'i' And i + 1 have Been considered in this else-if block...we are extra-incrementing 'i' And 'j' By 1 )
			j++;
			i++;
		}
		else
			chArray_CapitalizedFirstLetterOfEverWord[j] = chArray[i]; 
		j++; 
		
	}
	chArray_CapitalizedFirstLetterOfEverWord[j] = '\0'; 
	
	// *** String Output ***
	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", chArray);

	printf("\n\n");
	printf("String After Capitalizing First Letter Of Every Word : \n\n");
	printf("%s\n", chArray_CapitalizedFirstLetterOfEverWord);
	
	return(0);
}

int MyStrlen(char str[])
{
	//variable declarations 
	int j; 
	int string_length = 0; 

	//code 
	// *** Determining exact length of the string, by detecting the first occurence of null-terminating character (\0) ***
	for (j = 0; j < MAX_STRING_LENGTH; j++)
	{
		if (str[j] == '\0')
			break;
		else
			string_length++;
	}
	return(string_length);
}