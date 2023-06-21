#include<stdio.h>
int main(void)
{
//variable declarations 
	int hbl_iArray[5][3] = { {1,2,3}, {2,4,6} {3,6,9}, {4,8,12},{5,10,15} }; // In-Line  initialization 
	int hbl_int_size;
	int hbl_iArray_size;
	int hbl_iArray_num_elements, hbl_iArray_num_rows, hbl_iArray_num_columns;

	//code 
	printf("Harshal Lakare \n\n");
	printf("\n\n");

	hbl_int_size = sizeof(int);
	
	hbl_iArray_size = sizeof(hbl_iArray);
	printf("Size of two Dimensinal (2D) Interger Array IS = %d\n\n ", hbl_iArray_size);

	hbl_iArray_num_rows = hbl_int_size / sizeof(hbl_iArray[0]);
	printf("Number of Rows in Two Dimensinal (2D) Interger Array Is = %d\n\n",hbl_iArray_num_rows );

	hbl_iArray_num_columns = sizeof(hbl_iArray[0]) / hbl_int_size;
	printf("Number of columns In Two Dimentsianl (2D) Interger Array IS = %d\n\n", hbl_iArray_num_columns);

	hbl_iArray_num_elements = hbl_iArray_num_rows * hbl_iArray_num_columns; 
	printf("Number of Elements In Two Dimensional (2D) Interger Array Is = %d\n\n", hbl_iArray_num_elements);

	printf("\n\n");
	printf("Elements in The 2D Array : \n\n");

	// ****** Array Indices Begin from 0 , Hence , 1st row is actually 0th row and 1st column is actually 0th column ******

	//*** ROW 1 ***
	printf("****** Row 1******");
	printf("hbl_iArray[0][0] = %d\n", hbl_iArray[0][0]); //*** Column 1 *** (0th Element) ==>1 
	printf("hbl_iArray[0][0] = %d\n", hbl_iArray[0][1]); //*** Column 2 *** (1st Element) ==>2 
	printf("hbl_iArray[0][0] = %d\n", hbl_iArray[0][2]); //*** Column 3 *** (2nd Element) ==>3 

	printf("\n\n");

	//*** ROW 2 ***
	printf("****** Row 1******");
	printf("hbl_iArray[1][0] = %d\n", hbl_iArray[1][0]); //*** Column 1 *** (0th Element) ==>1 
	printf("hbl_iArray[1][1] = %d\n", hbl_iArray[1][1]); //*** Column 2 *** (1st Element) ==>2 
	printf("hbl_iArray[1][2] = %d\n", hbl_iArray[1][2]); //*** Column 3 *** (2nd Element) ==>3 

	printf("\n\n"); 

	//*** ROW 3 ***
	printf("****** Row 1******");
	printf("hbl_iArray[1][0] = %d\n", hbl_iArray[2][0]); //*** Column 1 *** (0th Element) ==>1 
	printf("hbl_iArray[1][1] = %d\n", hbl_iArray[2][1]); //*** Column 2 *** (1st Element) ==>2 
	printf("hbl_iArray[1][2] = %d\n", hbl_iArray[2][2]); //*** Column 3 *** (2nd Element) ==>3 

	printf("\n\n");

	//*** ROW 4 ***
	printf("****** Row 1******");
	printf("hbl_iArray[1][0] = %d\n", hbl_iArray[3][0]); //*** Column 1 *** (0th Element) ==>1 
	printf("hbl_iArray[1][1] = %d\n", hbl_iArray[3][1]); //*** Column 2 *** (1st Element) ==>2 
	printf("hbl_iArray[1][2] = %d\n", hbl_iArray[3][2]); //*** Column 3 *** (2nd Element) ==>3 

	printf("\n\n");


	//*** ROW 5 ***
	printf("****** Row 1******");
	printf("hbl_iArray[1][0] = %d\n", hbl_iArray[4][0]); //*** Column 1 *** (0th Element) ==>1 
	printf("hbl_iArray[1][1] = %d\n", hbl_iArray[4][1]); //*** Column 2 *** (1st Element) ==>2 
	printf("hbl_iArray[1][2] = %d\n", hbl_iArray[4][2]); //*** Column 3 *** (2nd Element) ==>3 

	printf("\n\n");

	return(0);
}