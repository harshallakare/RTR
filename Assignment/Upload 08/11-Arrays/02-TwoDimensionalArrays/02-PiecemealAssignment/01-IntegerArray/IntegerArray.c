#include<stdio.h>

int main(void)
{
	//variable declarations 
	int hbl_iArray[3][5]; //3 ROWS (0,1,2) And Columns (0,1,2,3,4)
	int hbl_int_size; 
	int hbl_iArray_size; 
	int hbl_iArray_num_elemnsts, hbl_iArray_num_rows, hbl_iArray_num_columns; 
	int i, j; 

	//code 
	printf("Harshal Lakare \n\n");
	printf("\n\n");

	hbl_int_size = sizeof(int); 
	
	hbl_iArray_size = sizeof(hbl_iArray); 
	printf("Size of two Dimensinal (2D) Interger array is = %d\n\n", hbl_iArray_size);

	hbl_iArray_num_rows = hbl_iArray_size / sizeof(hbl_iArray[0]); 
	printf("Number of Row in two Dimensinal (2D) Interger Array is = %d\n\n",hbl_iArray_num_rows);

	hbl_iArray_num_columns = sizeof(hbl_iArray[0])/ hbl_int_size;
	printf("Number of columns in two dimensinal (2D) Interger Array is = %d\n\n", hbl_iArray_num_columns);

	hbl_iArray_num_elemnsts = hbl_iArray_num_rows * hbl_iArray_num_columns; 
	printf("Number of Elements In two dimensional (2D) Interger Array is = %d\n\n", hbl_iArray_num_elemnsts);

	printf("\n\n");
	printf("Elements In the 2D Array : \n\n");

	// ****** PIECE_MEAL Assignment  ******
	// ****** ROW 1 ******
	hbl_iArray[0][0] = 21; 
	hbl_iArray[0][1] = 42;
	hbl_iArray[0][2] = 63;
	hbl_iArray[0][3] = 84;
	hbl_iArray[0][4] = 105;

	// ***** ROW 2 ****
	hbl_iArray[1][0] = 22;
	hbl_iArray[1][1] = 44;
	hbl_iArray[1][2] = 66;
	hbl_iArray[1][3] = 88;
	hbl_iArray[1][4] = 110;

	// ***** ROW 3 *****
	hbl_iArray[2][0] = 23;
	hbl_iArray[2][1] = 46;
	hbl_iArray[2][2] = 69;
	hbl_iArray[2][3] = 92;
	hbl_iArray[2][4] = 115;

	//*** DISPLAY ***
	for (i = 0; i < hbl_iArray_num_rows; i++)
	{
		printf("****** ROW %d******", (i + 1));
		for (j = 0; j < hbl_iArray_num_columns; j++)
		{
			printf("hbl_iArray[%d][%d] = %d\n ", i , j , hbl_iArray[i][j]);
		}
		printf("\n\n");
	}
	return(0);
}