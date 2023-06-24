#include<stdio.h>

#define hbl_MAX_STRING_LENGTH 512; 

int main(void)
{
	//function prototype 
	int hbl_Mystrlrn(char[]);

	//varaible declarations 

	// *** A 'String' is an array of characters ...so char[] is a char array and hence char[] is a 'string'***
	// *** An array of char array is an array of string !!!***
	// *** Hence char [] is one char array and hence is one string ***
	// *** Hence char [] [] is an array of char arrays and hence , is an array of strings ***
	
	//Here the string array can allow a maximum number of 10 string (10 rows) and each of these 10 string can have only upto 15 characters maximum (15 columns )

	char hbl_strArray[10][15] = { "Hello!", "Welcome", "To", "Real", "Time", "Rendering", "Batch", "(2020-21)", "of", "AstroMediComp" }; //In-Line Initialization
	int hbl_char_size; 
	int hbl_strArray_size;
	int hbl_strArray_num_elements, hbl_strArray_num_rows, hbl_strArray_num_columns;
	int hbl_strActual_num_char = 0; 
	int i; 

	//code 
	printf("\n\n");
	printf("HArshal Lakare\n\n");

	hbl_char_size = sizeof(char);
	
	hbl_strArray_size = sizeof(hbl_strArray);
	printf("Size of two dimentsinal (2D) character array (string array) is = %d\n\n", hbl_strArray_size);

	hbl_strArray_num_rows = hbl_strArray_size / sizeof(hbl_strArray[0]);
	printf("Number of rows(strings) In two dimensional(2D) Character Array(String Array) Is = % d\n\n", hbl_strArray_num_columns);

	hbl_strArray_num_columns = sizeof(hbl_strArray[0]) / hbl_char_size; 
	printf("Number of columns is two dimensional (2D) Character array (string Array) Is %d\n\n", hbl_strArray_num_columns);

	hbl_strArray_num_elements = hbl_strArray_num_rows * hbl_strArray_num_columns; 
	printf("MAximum Number of Elements (Character) In Two Dimentsional (2D) Character array (string array) is =%d\n\n", hbl_strArray_num_elements);

	for (i = 0; i < hbl_strArray_num_rows; i++)
	{
		hbl_strActual_num_char = hbl_strActual_num_char + hbl_Mystrlrn(hbl_strArray[i]); 
	}
	printf("Actual Number of elemenrs (character) In two dimensional (2D) Character array (string array) is = %d\n\n", hbl_strActual_num_char);

	printf("\n\n");
	printf("String In The 2D Array : \n\n");

	//Since, char[][] is an array of string, refrencing only by the row number (first []) will give the row or string 
	//The column Number (second [] ) is the perticular character in that string / row 

	printf("%s", hbl_strArray[0]);
	printf("%s", hbl_strArray[1]);
	printf("%s", hbl_strArray[2]);
	printf("%s", hbl_strArray[3]);
	printf("%s", hbl_strArray[4]);
	printf("%s", hbl_strArray[5]);
	printf("%s", hbl_strArray[6]);
	printf("%s", hbl_strArray[7]);
	printf("%s", hbl_strArray[8]);
	printf("%s", hbl_strArray[9]);

	return (0);
}
/* 
int hbl_MyStrlen(char str[])
{
	//variable declarations 
	int hbl_j; 
	int hbl_string_length = 0; 

	//code 
	// *** Determinging exact length of thr string, by detecting the first occurence of null-termination cahracter (\0) ***

	for (hbl_j = 0; hbl_j < hbl_MAX_STRING_LENGTH; hbl_j++)
	{
		if (str[hbl_j] == '\0')
			break;
		else
			hbl_string_length++;
	}
	return(hbl_string_length);
}
*/

int hbl_MyStrlen(char str[])
{
	//variable declarations 
	int hbl_j;
	int hbl_string_length = 0;
	
	//code 
	// *** Determining exact length of the string, by detecting the first occurence of null-terminating character (\0) ***
	for (hbl_j = 0; hbl_j < hbl_MAX_STRING_LENGTH; hbl_j++)
	{
		if (str[hbl_j] == '\0')
			break;
		else
			hbl_string_length++;
	}
	return(hbl_string_length);
}