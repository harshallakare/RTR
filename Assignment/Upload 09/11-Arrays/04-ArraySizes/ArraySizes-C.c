#include <stdio.h>

int main(void)
{
	//variable declarations 
	int iArray_One[5];
	int iArray_Two[5][3];
	int iArary_three[100][100][5];

	int num_rows_2D;
	int num_columns_2D; 

	int num_rows_3D;
	int num_columns_3D; 
	int depth_3D; 

	//code 
	printf("Harshal Lakare\n\n");
	printf("\n\n");
	printf("Size of 1D interger array iArray_One = %lu\n", sizeof(iArray_One));
	printf("Number Of elemenr in 1D interger array iArray_One = %lu\n",(sizeof(iArray_One) / sizeof(int)));

	printf("\n\n");
	printf("Size of 2D interger array iAZrray_Two = %lu\n", sizeof(iArray_Two));

	printf("Number rows 2D interger array iArray_two = %lu\n",(sizeof(iArray_Two) / sizeof(iArray_Two[0])));
	num_rows_2D = (sizeof(iArray_Two) / sizeof(iArray_Two[0]));

	printf("NUmber of elemenrs (columns) in each row in 2D interger array iArray_Two = %lu\n", (sizeof(iArray_Two[0]) / sizeof(iArray_Two[0][0])));
	num_columns_2D = (sizeof(iArray_Two[0]) / sizeof(iArray_Two[0][0]));

	printf("Number of elements in toral in 2D array iArray_Two = %d\n", (num_rows_2D * num_columns_2D));

	printf("\n\n");

	printf("\n\n");
	printf("Size of 3D integer array iArray_Three = %lu\n", sizeof(iArary_three));

	printf("Number rows in 3D interger array iArray_three = %lu\n", (sizeof(iArary_three) / sizeof(iArary_three[0])));
	num_rows_3D = (sizeof(iArary_three) / sizeof(iArary_three[0])); 

	printf("Number of elemenrs (columns) in one row in 3D interger array iArray_Three = %lu\n", (sizeof(iArary_three[0]) / sizeof(iArary_three[0][0])));
	num_columns_3D = (sizeof(iArary_three[0]) / sizeof(iArary_three[0][0])); 

	printf("Number of elemenrs (depth) in one column in one row in 3D integer array iArray_Three = %lu\n", (sizeof(iArary_three[0][0][0])));
	depth_3D = (sizeof(iArary_three[0][0]) / sizeof(iArary_three[0][0][0]));

	printf("Number of elements in toral in 3d Array iArray_three = %d\n", (num_rows_3D * num_columns_3D * depth_3D));

	printf("\n\n");

	return(0);
}