#include <stdio.h>

#define hbl_MAX_STRING_LENGTH 512 

int main(void)
{
	//function prototype 
	void hbl_MyStrcpy(char[], char[]);

	//variable declarations 

	// *** A 'String' Is an array of charactrer so char [] is a char array and hence, char [] is a 'string'***
	// *** An array of char array is an array of strings !!! ***
	// *** Hence, char [] is one char array and hence is one string ***
	// *** Hence, char [] [] is an array of char arrays and hence is an array of strings ***

	//Here, The string array can allow a mazimum number of  5 strings (5 rows) and each of these 5 strings can have only upto 10 character maximum (10 columns )
	char hbl_strArray[5][10]; //5 Rows (0,1,2,3,4) -> 5 Strings (Each string can have a maximum of 10 characters )

	int hbl_char_size;
	int hbl_strArray_size;
	int hbl_strArray_num_elements, hbl_strArray_num_rows, hbl_strArray_num_columns;
	int i;

	//code 
	printf("Harshal Lakare\n\n");
	printf("\n\n");

	hbl_char_size = sizeof(char);

	hbl_strArray_size = sizeof(hbl_strArray);
	printf("Size of two Dimensional (2D) Character array (String array) is = %d\n\n ", hbl_strArray_size);

	hbl_strArray_num_rows = hbl_strArray_size / sizeof(hbl_strArray[0]);

	hbl_strArray_num_columns = sizeof(hbl_strArray[0]) / hbl_char_size;
	printf("Number of Columns In two dimensinal (2D) Character array (string array) is = %d\n\n", hbl_strArray_num_columns);

	hbl_strArray_num_elements = hbl_strArray_num_rows * hbl_strArray_num_columns;
	printf("Maximum Number of elements (character) in two dimensional (2D) Character array (string array) Is = %d\n\n", hbl_strArray_num_elements);

	// *** PEICE-MEAL Assigment ***
	hbl_MyStrcpy(hbl_strArray[0], "My");
	hbl_MyStrcpy(hbl_strArray[1], "Name");
	hbl_MyStrcpy(hbl_strArray[2], "Is");
	hbl_MyStrcpy(hbl_strArray[3], "Harshal ");
	hbl_MyStrcpy(hbl_strArray[4], "Lakare");
	
	printf("\n\n");
	printf("THe Strings In the 2D character Array are : \n\n");
	
	for (i = 0; i < hbl_strArray_num_rows; i++)
		printf("%s", hbl_strArray[i]);
	
	printf("\n\n");
	return(0);

}

void hbl_MyStrcpy(char hbl_str_destination[], char hbl_str_source[])
{
	//function protoype 
	int hbl_MyStrlen(char[]);

	//variable declarations 
	int hbl_iStringLength = 0; 
	int j; 

	//code 
	hbl_iStringLength = hbl_MyStrlen(hbl_str_source); 
	for (j = 0; j < hbl_iStringLength; j++)
		hbl_str_destination[j] = hbl_str_source[j];

	hbl_str_destination[j] = '\0'; 
}

int hbl_MyStrlen(char str[])
{
	//variable declarations 
	int j; 
	int hbl_string_lenght = 0; 

	//code 
	//*** Determinging exact length of the string, by detecting the first occuracne of null-terminating character (\0) ***
	for (j = 0; j < hbl_MAX_STRING_LENGTH; j++)
	{
		if (str[j] == '\0')
			break;
		else
			hbl_string_lenght++;
	}
	return(hbl_string_lenght);
}
