#include <stdio.h>

int main(void)
{
	//variable declarations 
	int hbl_iArray_One[5];
	int hbl_iArray_Two[5][3];
	int hbl_iArary_three[100][100][5];

	int hbl_num_rows_2D;
	int hbl_num_columns_2D;

	int hbl_num_rows_3D;
	int hbl_num_columns_3D;
	int hbl_depth_3D;

	//code 
	printf("Harshal Lakare\n\n");
	printf("\n\n");
	printf("Size of 1D interger array iArray_One = %lu\n", sizeof(hbl_iArray_One));
	printf("Number Of elemenr in 1D interger array iArray_One = %lu\n",(sizeof(hbl_iArray_One) / sizeof(int)));

	printf("\n\n");
	printf("Size of 2D interger array iAZrray_Two = %lu\n", sizeof(hbl_iArray_Two));

	printf("Number rows 2D interger array iArray_two = %lu\n",(sizeof(hbl_iArray_Two) / sizeof(hbl_iArray_Two[0])));
	hbl_num_rows_2D = (sizeof(hbl_iArray_Two) / sizeof(hbl_iArray_Two[0]));

	printf("NUmber of elemenrs (columns) in each row in 2D interger array iArray_Two = %lu\n", (sizeof(hbl_iArray_Two[0]) / sizeof(hbl_iArray_Two[0][0])));
	hbl_num_columns_2D = (sizeof(hbl_iArray_Two[0]) / sizeof(hbl_iArray_Two[0][0]));

	printf("Number of elements in toral in 2D array iArray_Two = %d\n", (hbl_num_rows_2D * hbl_num_columns_2D));

	printf("\n\n");

	printf("\n\n");
	printf("Size of 3D integer array iArray_Three = %lu\n", sizeof(hbl_iArary_three));

	printf("Number rows in 3D interger array iArray_three = %lu\n", (sizeof(hbl_iArary_three) / sizeof(hbl_iArary_three[0])));
	hbl_num_rows_3D = (sizeof(hbl_iArary_three) / sizeof(hbl_iArary_three[0]));

	printf("Number of elemenrs (columns) in one row in 3D interger array iArray_Three = %lu\n", (sizeof(hbl_iArary_three[0]) / sizeof(hbl_iArary_three[0][0])));
	hbl_num_columns_3D = (sizeof(hbl_iArary_three[0]) / sizeof(hbl_iArary_three[0][0]));

	printf("Number of elemenrs (depth) in one column in one row in 3D integer array iArray_Three = %lu\n", (sizeof(hbl_iArary_three[0][0][0])));
	hbl_depth_3D = (sizeof(hbl_iArary_three[0][0]) / sizeof(hbl_iArary_three[0][0][0]));

	printf("Number of elements in toral in 3d Array iArray_three = %d\n", (hbl_num_rows_3D * hbl_num_columns_3D * hbl_depth_3D));

	printf("\n\n");

	return(0);
}