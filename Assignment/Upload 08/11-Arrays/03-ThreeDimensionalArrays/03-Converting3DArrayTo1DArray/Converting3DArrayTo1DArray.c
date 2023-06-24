#include<stdio.h>

#define hbl_NUM_ROW 5 
#define hbl_NUM_COLUMNS 3 
#define hbl_DEPTH 2 

int main(void)
{
	//variable declarations 

	//IN-LINE Initialization 
	int hbl_iArray[hbl_NUM_ROW][hbl_NUM_COLUMNS][hbl_DEPTH] = { { {9,18,}, {27,36}, {45,54} },
																{ {8,16},  {24,32}, {40,48} },
																{ {7,14},  {21,28}, {35,36} },
																{ {5,10},  {15,20}, {25,30} } }; 
	int hbl_i, hbl_j, hbl_k;
	
	int hbl_iArray_1D[hbl_NUM_ROW * hbl_NUM_COLUMNS * hbl_DEPTH]; // 5 * 3 * 2 Elements => 30 Elemenrts in 1D Array

	//code 

	//****** Display 3D Array ******
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	printf("Elements In THe 3D Array : \n\n");
	for (hbl_i = 0; hbl_i < hbl_NUM_ROW; hbl_i++)
	{
		printf("****** ROW %d****** \n", (hbl_i + 1));
		for (hbl_j = 0; hbl_j < hbl_NUM_COLUMNS; hbl_j++)
		{
			printf("****** COLUMNS %d ****** \n",(hbl_j + 1));
			for (hbl_k = 0; hbl_k < hbl_DEPTH; hbl_k++)
			{
				printf("iArray[%d][%d][%d] = %d\n", hbl_i, hbl_j, hbl_k, hbl_iArray[hbl_i][hbl_j][hbl_k]);
			}
			printf("\n");
		}
		printf("\n"); 
	}
	// ****** Converting 3D to 1D ******
	for (hbl_i = 0; hbl_i < hbl_NUM_ROW; hbl_i++)
	{
		for (hbl_j = 0; hbl_j < hbl_NUM_COLUMNS; hbl_j++)
		{
			for (hbl_k = 0; hbl_k < hbl_DEPTH; hbl_k++)
			{
				hbl_iArray_1D[(hbl_i * hbl_NUM_COLUMNS * hbl_DEPTH) + (hbl_j * hbl_DEPTH) + hbl_k] = hbl_iArray[hbl_i][hbl_j][hbl_k];
			}
		}
	}

	// ****** DISPLAY 1D Array ******
	printf("\n\n\n\n");
	printf("Elements In The 1D Array : \n\n");
	for (hbl_i = 0; hbl_i < (hbl_NUM_ROW * hbl_NUM_COLUMNS * hbl_DEPTH); hbl_i++)
	{
		printf("hbl_iArray_1D[%d] = %d\n", hbl_i, hbl_iArray_1D[hbl_i]);
	}
}