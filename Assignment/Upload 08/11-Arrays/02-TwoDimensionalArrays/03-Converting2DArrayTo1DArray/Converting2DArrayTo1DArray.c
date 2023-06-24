#include <stdio.h>

#define	hbl_NUM_ROW 5 
#define hbl_NUM_COLUMNS 3 

int main(void)
{
	//variable delcarations 
	int hbl_iArray_2D[hbl_NUM_ROW][hbl_NUM_COLUMNS]; //Total Number Of elements = NUM_ROW * NUM_COLUMNS
	int hbl_iArray_1D[hbl_NUM_ROW * hbl_NUM_COLUMNS];
	int hbl_i, hbl_j;
	int hbl_num;

	//code 
	printf("Enter Elements of Your Choice To Fill Up The Interger 2D Array : \n\n");
	for (hbl_i = 0; hbl_i < hbl_NUM_ROW; hbl_i++)
	{
		printf("For ROW NUMBER %d :\n",(hbl_i + 1));
		for (hbl_j = 0; hbl_j < hbl_NUM_COLUMNS; hbl_j++)
		{
			printf("Enter Elements NUmber %d : \n", (hbl_j + 1));
			scanf("%d", &hbl_num);
			hbl_iArray_2D[hbl_i][hbl_j] = hbl_num;
		}
		printf("\n\n");
	}

	// *** DISPLAY OF 2D Array ***
	printf("\n\n");
	printf("Two-Dimensional (2D) Array Of Interger  : \n\n");
	for (hbl_i = 0; hbl_i < hbl_NUM_ROW; hbl_i++)
	{
		printf("****** ROW %d ******\n", (hbl_i + 1));
		for (hbl_j = 0; hbl_j < hbl_NUM_COLUMNS; hbl_j++)
		{
			printf("hbl_iArray_2D[%d][%d] = %d\n", hbl_i , hbl_j , hbl_iArray_2D[hbl_i][hbl_j]);
		}
		printf("\n\n");
	}
	
	//*** Converting 2D Interger array to 1D Interger array *** 
	for (hbl_i = 0; hbl_i < hbl_NUM_ROW; hbl_i++)
	{
		for (hbl_j = 0; hbl_j < hbl_NUM_COLUMNS; hbl_j++)
		{
			hbl_iArray_1D[(hbl_i * hbl_NUM_COLUMNS) + hbl_j] = hbl_iArray_2D[hbl_i][hbl_j];
		}
	}

	// *** PRINTING 1D Array ***
	printf("\n\n");
	printf("One-Dimensional (1D) Array Of Interger : \n\n");
	for (hbl_i = 0; hbl_i < (hbl_NUM_ROW * hbl_NUM_COLUMNS); hbl_i++)
	{
		printf("iArray_1D[%d] = %d\n", hbl_i , hbl_iArray_1D[hbl_i]);
	}
	printf("\n\n");

	return(0);
}