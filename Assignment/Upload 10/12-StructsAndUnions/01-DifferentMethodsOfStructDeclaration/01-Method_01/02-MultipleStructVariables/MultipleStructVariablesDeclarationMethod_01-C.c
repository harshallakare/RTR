#include<stdio.h>

//Definging Struct....
struct hbl_MyPoint
{
	int hbl_x; 
	int hbl_y; 
}point_A, point_B, point_C, point_D,point_E; //Declaring 5 struct variable of type 'struct MyPoint' globally...

int main(void)
{
	//code 
	//Assigning Data Value to the data memeber of 'struct MyPoint' variable 'point_A'
	point_A.hbl_x = 3; 
	point_A.hbl_y = 0; 
	
	//Assinging Data value to the data member of 'struct MyPoint' variable 'point_B'
	point_B.hbl_x = 1;
	point_B.hbl_y = 2;

	//Assinging Data value to the data member of 'struct MyPoint' variable 'point_C'
	point_C.hbl_x = 9;
	point_C.hbl_y = 6;

	//Assinging Data value to the data member of 'struct MyPoint' variable 'point_D'
	point_D.hbl_x = 8;
	point_D.hbl_y = 2;

	//Assinging Data value to the data member of 'struct MyPoint' variable 'point_E'
	point_E.hbl_x = 11;
	point_E.hbl_y = 8;

	//Displaying Value of the data member of 'struct My Point' (all variable )
	printf("Harshal Lakare\n\n");
	printf("\n\n");
	printf("Co-ordinates (x ,y) of Point 'A' are : (%d, %d)\n\n",point_A.hbl_x, point_A.hbl_y);
	printf("Co-ordinates (x ,y) of Point 'A' are : (%d, %d)\n\n", point_B.hbl_x, point_B.hbl_y);
	printf("Co-ordinates (x ,y) of Point 'A' are : (%d, %d)\n\n", point_C.hbl_x, point_C.hbl_y);
	printf("Co-ordinates (x ,y) of Point 'A' are : (%d, %d)\n\n", point_D.hbl_x, point_D.hbl_y);
	printf("Co-ordinates (x ,y) of Point 'A' are : (%d, %d)\n\n", point_E.hbl_x, point_E.hbl_y);

	return(0);
}