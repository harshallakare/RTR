#include<stdio.h>

#define hbl_MAX_STRING_LENGTH 512 ; 

int main(void)
{
	//function prototype 
	int hbl_MyStrlen(char[]);

	//varaible declaration 

	// *** A 'string' is an array of character ...so char [] is a char array and hence char [] is a 'string'
	// *** An array of char array is an rray of string !!! *** 
	// *** Hence, char [] is one char array and hence is one string 
	// *** Hence, char p[ p[ is and array of char arrays and hence, is an array of strings *** 

	//Hence the string array can allow a maxinum number of 10 strings (10 rows) amd each of these 10 strings can have only upto 15 characters maximum (15 columns)
	char hbl_strArray[10][15] = { "Hello!", "Welcome", "To", "Real", "Time", "Rednding", "Batch", "(2022-21)","of", "AstroMediComp" }; //In_Line Initializations 
	int hbl_iStrLengths[10]; //1D Interger array - Strores lenght of those strng at corresponding indices in 'hbl_strArray[]' eg: hbl_iStrlengths[0] will be the length of string at strArray[0], iStrLengths[1] will be the length of string at strArray[1]...10 strings, 10 lengths
	int hbl_strArray_size; 
	int hbl_strArray_num_rows; 
	int i, j; 

	//code 
	hbl_strArray_size = sizeof(hbl_strArray);
	hbl_strArray_num_rows = hbl_strArray_size / sizeof(hbl_strArray[0]);

	//Storing in length of all the strings....
	for (i = 0; i < hbl_strArray_num_rows; i++)
		hbl_iStrLengths[i] = hbl_MyStrlen(hbl_strArray[i]);
	
	printf("\n\n");
	printf("The Entire String Array : \n\n");
	for (i = 0; i < hbl_strArray_num_rows; i++)
		printf("%s", hbl_strArray[i]);

	printf("\n\n");
	printf("String In The 2D Array : \n\n");

	//Since, char[][] is an aray of string, refrencing only by the row number (first[]) will give the row or the string 
	// The Column Number (second []) is the particular character in that string / row 

	for (i = 0; i < hbl_strArray_num_rows; i++)
	{
		printf("String Number %d ==> %s \n\n", (i + 1 ), hbl_strArray[i]);
		for (j = 0; j < hbl_iStrLengths[i]; j++)
		{
			printf("Character %d = %c\n", (j + 1 ), hbl_strArray[i][j]);
		}
		printf("\n\n");
	}
	return(0);
}

int hbl_MyStrlen(char str[])
{
	//variable declarations 
	int j; 
	int string_length = 0; 

	//code 
	// *** Determinging exact length of the string, by detecting the first occurance of numm-terminating characrter (\0) ***
	for (j = 0; j < hbl_MAX_STRING_LENGTH; j++)
	{
		if (str[j] == '\0')
			break;
		else
			string_length++;
	}
	return(string_length); 
}

