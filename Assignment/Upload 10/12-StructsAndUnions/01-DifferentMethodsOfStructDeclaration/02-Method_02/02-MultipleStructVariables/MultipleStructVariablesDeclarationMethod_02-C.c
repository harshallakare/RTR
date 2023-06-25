#include <stdio.h>

//Defining struct 
struct hbl_MyPoint
{
	int hbl_x; 
	int hbl_y; 

};

struct hbl_MyPoint hbl_point_A, hbl_point_B,hbl_point_C, hbl_point_D, hbl_point_E; // Declaring 5 struct variable of type 'struct Mypoint' globally...

int main(void)
{
	//code 
	//Assigining Data Values to the Data Memeber of 'struct MyPoint'  variable 'point_A'
	hbl_point_A.hbl_x = 3; 
	hbl_point_A.hbl_y = 0; 

	//Assigining Data Values to the Data Memeber of 'struct MyPoint'  variable 'point_B'
	hbl_point_B.hbl_x = 1;
	hbl_point_B.hbl_y = 2;

	//Assigining Data Values to the Data Memeber of 'struct MyPoint'  variable 'point_C'
	hbl_point_C.hbl_x = 9;
	hbl_point_C.hbl_y = 6;

	//Assigining Data Values to the Data Memeber of 'struct MyPoint'  variable 'point_D'
	hbl_point_D.hbl_x = 8;
	hbl_point_D.hbl_y = 2;

	//Assigining Data Values to the Data Memeber of 'struct MyPoint'  variable 'point_E'
	hbl_point_E.hbl_x = 11;
	hbl_point_E.hbl_y = 8;

	//Displaying Values of the data memeber of 'struct MyPoint' (all varibales )
	printf("\n\n");
	printf("CO-ordinates (x,y) of the 'A' Are : (%d, %d) \n\n", hbl_point_A.hbl_x, hbl_point_A.hbl_y);
	printf("CO-ordinates (x,y) of the 'B' Are : (%d, %d) \n\n", hbl_point_B.hbl_x, hbl_point_B.hbl_y);
	printf("CO-ordinates (x,y) of the 'C' Are : (%d, %d) \n\n", hbl_point_C.hbl_x, hbl_point_C.hbl_y);
	printf("CO-ordinates (x,y) of the 'D' Are : (%d, %d) \n\n", hbl_point_D.hbl_x, hbl_point_D.hbl_y);
	printf("CO-ordinates (x,y) of the 'E' Are : (%d, %d) \n\n", hbl_point_E.hbl_x, hbl_point_E.hbl_y);

	return(0);
}
