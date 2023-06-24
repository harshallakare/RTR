#include <stdio.h>

#define hbl_MAX_STRING_LENGTH 512 
int main(void)
{
	//variable declarations 
	// *** A 'String' is an array of characters so char[] is a char array and hence char [] is a 'string'***
	// *** AN Array of char array is an array of strings !!! ***
	// *** Hence, char[] is one char array and hence is one string ***
	// *** Hence, char [] [] is an array of char array and hence, is an array of string***
	
	//Here, The string array can allow a maximum number of 5 strings(5 rows) and each of these 5 strings can have only upto 10 characters maximum(10 Columns) 

	char hbl_strArray[5][10]; // 5 Row (0,1,2,3,4) -> 5 Strings (Each String can have a maximum of 10 character )
	int hbl_char_size; 
	int hbl_strArray_size; 
	int hbl_strArray_num_elements, hbl_strArray_num_rows, hbl_strArray_num_columns; 

	int i; 


	//code 
	printf("Harshal Lakare\n\n");
	printf("\n\n");

	hbl_char_size = sizeof(char);
	
	hbl_strArray_size = sizeof(hbl_strArray);
	printf("Size of two Dimensional (2D) Character Array (String Array) Is = %d\n\n",hbl_strArray_size);

	hbl_strArray_num_rows = hbl_strArray_size / sizeof(hbl_strArray[0]);
	printf("Number of Rows (strings) In Two Dimensinal (2D) character array (String array) is = %d\n\n", hbl_strArray_num_rows);

	hbl_strArray_num_columns = sizeof(hbl_strArray[0]) / hbl_char_size;
	printf("Number of columns in Two Dimensional (2D) Character Array (String Array) Is = %d\n\n", hbl_strArray_num_columns);

	hbl_strArray_num_elements = hbl_strArray_num_rows * hbl_strArray_num_columns;
	printf("Maximum Number of Elements (Characters) In Two Dimensional (2D) character Array (String Array) Is = %d\n\n", hbl_strArray_num_elements);

	// ****** PIECE-MEAL ASSIGNMENT ******
	// ****** ROW 1 / STRING 1 ******
	hbl_strArray[0][0] = 'M'; 
	hbl_strArray[0][1] = 'Y';
	hbl_strArray[0][2] = '\0'; //NULL-TERMINATING CHARACTER 

	// ****** ROW 2 /STRING 2  ******
	hbl_strArray[1][0] = 'N';
	hbl_strArray[1][1] = 'a';
	hbl_strArray[1][2] = 'm';
	hbl_strArray[1][3] = 'e';
	hbl_strArray[1][4] = '\0'; //NULL-TERMINATING CHARACTER 

	// ****** ROW 3 /STRING 3  ******
	hbl_strArray[2][0] = 'I';
	hbl_strArray[2][1] = 's';
	hbl_strArray[2][2] = '\0'; //NULL-TERMINATING CHARACTER 

	// ****** ROW 4 /STRING 4  ******
	hbl_strArray[3][0] = 'H';
	hbl_strArray[3][1] = 'a';
	hbl_strArray[3][2] = 'r';
	hbl_strArray[3][3] = 's';
	hbl_strArray[3][4] = 'h';
	hbl_strArray[3][5] = 'a';
	hbl_strArray[3][6] = 'l';
	hbl_strArray[3][7] = '\0'; //NULL-TERMINATING CHARACTER 

	// ****** ROW 5 /STRING 5  ******
	hbl_strArray[4][0] = 'L';
	hbl_strArray[4][1] = 'a';
	hbl_strArray[4][2] = 'k';
	hbl_strArray[4][3] = 'a';
	hbl_strArray[4][4] = 'r';
	hbl_strArray[4][5] = 'e';
	hbl_strArray[4][6] = '\0'; //NULL-TERMINATING CHARACTER 

	printf("\n\n");
	printf("The String In the 2D Character Array Are : \n\n");

	for (i = 0; i < hbl_strArray_num_rows; i++)
		printf("%s", hbl_strArray[i]);

	printf("\n\n");
	
	return(0);
}

int hbl_MyStrlen(char str[])
{
	//varaiable declarations 
	int hbl_j; 
	int hbl_string_length = 0; 

	//code 
	// *** Determining exact length of the string, by detectting the first occurence of Null-terminating character (\0) ***

	for (hbl_j = 0; hbl_j < hbl_MAX_STRING_LENGTH; hbl_j++)
	{
		if (str[hbl_j] == '\0')
			break;
		else
			hbl_string_length++;
	}
	return(hbl_string_length);
}