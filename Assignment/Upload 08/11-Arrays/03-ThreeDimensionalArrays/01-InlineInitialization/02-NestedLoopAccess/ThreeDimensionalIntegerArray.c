#include<stdio.h>
int main(void)
{
	//variable declarations 

	//IN-Line Intializations 
	int hbl_iArray[5][3][2] = { { {9,18}, {27,36}, {45,54} },
							{ {8,16}, {24,32}, {40,48} },
							{ {7,14}, {21,28}, {35,42} },
							{ {6,12}, {18,24}, {30,36} },
							{ {5,10}, {15,20}, {25,30} } }; 

	int hbl_int_size;
	int hbl_iArray_size;
	int hbl_iArray_num_elements, hbl_iArray_width, hbl_iArray_height, hbl_iArray_depth;
	int hbl_i, hbl_j, hbl_k;

	//code
	printf("Harshal Lakare \n\n");
	printf("\n\n");

	hbl_int_size = sizeof(int);

	hbl_iArray_size = sizeof(hbl_iArray);
	printf("Size of Three Dimensional (3D) Interger Array Is = %d\n\n", hbl_iArray_size);

	hbl_iArray_width = hbl_iArray_size / sizeof(hbl_iArray[0]);
	printf("Number of coumns (height) In Three Dimensional (3D) Interger Array Is %d\n\n", hbl_iArray_width);

	hbl_iArray_height = sizeof(hbl_iArray[0]) / sizeof(hbl_iArray[0][0]);

	hbl_iArray_depth = sizeof(hbl_iArray[0][0]) / hbl_int_size;
	printf("Depth In three dimensional (3D) Interger Array Is = %d\n\n", hbl_iArray_depth);

	hbl_iArray_num_elements = hbl_iArray_width * hbl_iArray_height * hbl_iArray_depth;
	printf("NUmber of elememnts In Three Dimensional (3D) Interger Array Is = %d\n\n", hbl_iArray_num_elements);

	printf("\n\n");
	printf("Elements In Interger 3D Array : \n\n");

	for (hbl_i = 0; hbl_i < hbl_iArray_width; hbl_i++)
	{
		printf("****** ROW %d******\n", (hbl_i  + 1 ));
		for (hbl_j = 0; hbl_j < hbl_iArray_height; hbl_j++)
		{
			printf("****** Column %d******\n", (hbl_j + 1 ));
			for (hbl_k = 0; hbl_k < hbl_iArray_depth; hbl_k++)
			{
				printf("iArray[%d][%d][%d] = %d\n", hbl_i, hbl_j, hbl_k, hbl_iArray[hbl_i][hbl_j][hbl_k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return(0);



}