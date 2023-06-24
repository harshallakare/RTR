#include<stdio.h>
int main(void)
{
	//variable declarations 
	int hbl_iArray[5][3] = { {1,2,3}, {2,4,6}, {3,6,9}, {4,8,12}, {5,10,15} }; // In-Line  initialization 
	int hbl_int_size;
	int hbl_iArray_size;
	int hbl_iArray_num_elements, hbl_iArray_num_rows, hbl_iArray_num_columns;
	int i, j; 

	//code 
	printf("harshal Lakare \n\n");
	printf("\n\n");

	hbl_int_size = sizeof(int);

	//hbl_iArray = sizeof(hbl_iArray);	
	hbl_iArray_size = sizeof(hbl_iArray);
	printf("Size of two dimensional (2D)Interget Array is = %d\n\n", hbl_iArray_size);

	hbl_iArray_num_rows = hbl_iArray_size / sizeof(hbl_iArray[0]);
	printf("Number of rows in two Dimensinal (2D) Interger Array Is = %d\n\n", hbl_iArray_num_rows);

	hbl_iArray_num_columns = sizeof(hbl_iArray[0]) / hbl_int_size;
	printf("NUmber of COlumns In Two Dimesinal (2D) Interger Array Is = %d\n\n", hbl_iArray_num_columns);

	hbl_iArray_num_elements = hbl_iArray_num_rows * hbl_iArray_num_columns; 
	printf("NUmber Of elements in tow Dimenrsinal (2D) Interger Array Is = %d\n\n", hbl_iArray_num_elements);
	
	printf("\n\n");
	printf("Elements In the 2D Array : \n\n");

	// *** Array Indices Begin from 0 , Hence , 1st Row IS actually 0 th row and 1st column is acrully 0th column ***
	for (i = 0; i < hbl_iArray_num_rows; i++)
	{
		printf("****** ROW %d******", (i +1));
		for (j = 0; j < hbl_iArray_num_columns; j++)
		{
			printf("hbl_iArray[%d][%d] = %d\n", i,j,hbl_iArray[i][j]);
		}
		printf("\n\n");
			
	}
	return(0);
}
