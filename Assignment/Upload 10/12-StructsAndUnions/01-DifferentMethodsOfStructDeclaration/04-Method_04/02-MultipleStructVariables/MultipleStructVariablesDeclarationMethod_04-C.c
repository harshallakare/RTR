#include<stdio.h>

//Defining struct 
struct MyPoint
{
	int x; 
	int y; 
};

int main(void)
{
	//variable declarations 
	struct MyPoint point_A, point_B, point_C, point_D, point_E; //Declaring 5 struct variable of type 'struct MyPoint' locally....

	//code 
	//Assinging Data Value To the data Member of 'struct MyPoint' varaible 'point_A'
	point_A.x = 3; 
	point_A.y = 0; 

	//Assinging Data Value To the data Member of 'struct MyPoint' varaible 'point_B'
	point_B.x = 1;
	point_B.y = 2;

	//Assinging Data Value To the data Member of 'struct MyPoint' varaible 'point_C'
	point_C.x = 9;
	point_C.y = 6;

	//Assinging Data Value To the data Member of 'struct MyPoint' varaible 'point_D'
	point_D.x = 8;
	point_D.y = 2;

	//Assinging Data Value To the data Member of 'struct MyPoint' varaible 'point_E'
	point_E.x = 11;
	point_E.y = 8;

	//Displaying Value of the Data Members of 'struct MyPoint' (all variables)
	printf("Harshal Lakare\n\n");
	printf("\n\n");
	printf("Co-ordinates (hbl_x,hbl_y) Of Point 'hbl_A' Are : (%d, %d)\n\n", point_A.x, point_A.y);
	printf("Co-ordinates (hbl_x,hbl_y) Of Point 'hbl_B' Are : (%d, %d)\n\n", point_B.x, point_B.y);
	printf("Co-ordinates (hbl_x,hbl_y) Of Point 'hbl_C' Are : (%d, %d)\n\n", point_C.x, point_C.y);
	printf("Co-ordinates (hbl_x,hbl_y) Of Point 'hbl_D' Are : (%d, %d)\n\n", point_D.x, point_D.y);
	printf("Co-ordinates (hbl_x,hbl_y) Of Point 'hbl_E' Are : (%d, %d)\n\n", point_E.x, point_E.y);

	return(0);
}
