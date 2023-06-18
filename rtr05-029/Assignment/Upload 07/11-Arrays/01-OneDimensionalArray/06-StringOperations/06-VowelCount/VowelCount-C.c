#include<stdio.h>

#define MAX_STRING_LENGTH 512 

int main(void)
{
	//functoin prototype 
	int MyStrlen(char[]);

	//variable declarations 
	char chArray[MAX_STRING_LENGTH]; // A Character Array Is A string
	int iStringLength;
	int count_A = 0, count_E = 0, count_I = 0, count_O = 0, count_U = 0; // initials Counts = 0 
	int i; 

	//code 

	// *** String Input***
	printf("\n\n");
	printf("Enter A string : \n\n");
	gets_s(chArray, MAX_STRING_LENGTH);

	// *** String output***
	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n",chArray);

	iStringLength = MyStrlen(chArray); 

	for (i = 0; i < iStringLength; i++)
	{
		switch (chArray[i])
		{
		case 'A':
		case 'a':
			count_A++;
			break;
		case 'E':
		case 'e':
			count_E++;
			break;
		case 'I':
		case 'i':
			count_I++;
			break;
		case 'O':
		case 'o':
			count_O++;
			break;
		case 'U': 
		case 'u':
			count_U++;
			break;
		default:
			break;
		}
	}

	printf("\n\n");
	printf("In The string entered By you, the vowels And the NUmber of their occurences are are follwos : \n\n");
	printf("'A' Has occured = %d Time !!!\n\n", count_A);
	printf("'E' Has occured = %d Time !!!\n\n", count_E);
	printf("'I' Has occured = %d Time !!!\n\n", count_I);
	printf("'O' Has occured = %d Time !!!\n\n", count_O);
	printf("'U' Has occured = %d Time !!!\n\n", count_U);

	return(0);
}

int MyStrlen(char str[])
{
	//variable declarations 
	int j; 
	int string_lenght = 0; 

	//code 
	// *** Determining exact lenght of the string by detecting the first occurence of null terminiating character (\0) ***
	for (j = 0; j < MAX_STRING_LENGTH; j++)
	{
		if (str[j] == '\0')
			break;
		else
			string_lenght++;
	}
	return(string_lenght);

}
