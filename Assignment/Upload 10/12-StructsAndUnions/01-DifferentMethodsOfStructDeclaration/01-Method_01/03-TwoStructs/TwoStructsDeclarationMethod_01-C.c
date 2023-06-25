#include <stdio.h>

//Definfing Struct 
struct hbl_MyPoint
{
	int hbl_x;
	int hbl_y;
}point; //declaraing  a single variable of type 'struct MyPoint' globally 

//Definging struct
struct hbl_MyPointProperties
{
	int hbl_quadrant;
	char hbl_axis_location[10];
}point_proterties; //declaraing a single varibale of type 'struct MyPointProperties' globally...

int main(void)
{
	//code
	//User Input For the Data Members of 'struct MyPoint' variable 'point_A'
	printf("Harshal Lakare\n\n");
	printf("\n\n");
	printf("Enter X-coordinate For A point : ");
	scanf("%d", &point.hbl_x);
	printf("Enter Y-Coordinate For A point : ");
	scanf("%d", &point.hbl_y);

	printf("\n\n");
	printf("Point Co-ordinates (x,y) Are : (%d, %d) !!!\n\n", point.hbl_x, point.hbl_y);

	if (point.hbl_x == 0 && point.hbl_y == 0)
		printf("The Point Is the Origin (%d, %d) !!!\n", point.hbl_x, point.hbl_y);
	else //Atlest one of the two value (either 'X' or 'Y' or Both ) is a non-zero value...
	{
		if (point.hbl_x == 0) //If 'X' Is zero ...obviously 'Y' IS the Non-zero value 
		{
			if (point.hbl_y < 0) //If 'Y' Is -ve 
				strcpy(point_proterties.hbl_axis_location, "Negative Y");
			if (point.hbl_y > 0) // If 'Y' is +ve
				strcpy(point_proterties.hbl_axis_location, "Positive Y");

			point_proterties.hbl_quadrant = 0; //A Point Lying on any of the co-ordinate Axes Is not a prt of any quadrant....
			printf("The Point Lies on The %s Axis !!!\n\n", point_proterties.hbl_axis_location);

		}
		else if (point.hbl_y == 0) //If 'Y' Is Zero ...Obviously 'X' Is the Non-zero value 
		{
			if (point.hbl_x < 0) //If 'X' Is -ve 
				strcpy(point_proterties.hbl_axis_location, "Negative X");
			if (point.hbl_x > 0) // If 'X' is +ve
				strcpy(point_proterties.hbl_axis_location, "Positive X");

			point_proterties.hbl_quadrant = 0; // A Point Lying ON Any of the coordinatre Axes Is not A part of Any Quadrant....
			printf("The  Point Lies On The %s Axis !!!\n\n", point_proterties.hbl_axis_location);
		}
		else // Bothe 'X' and 'Y' Are non-zero
		{
			point_proterties.hbl_axis_location[0] = '\0';//A Point Lying In Any Of the 4 Quadrants canon be lying on any of the co-ordinates axes....

			if (point.hbl_x > 0 && point.hbl_y > 0) //'X' Is +ve And 'Y' Is +Ve 
				point_proterties.hbl_quadrant = 1;
			else if (point.hbl_x < 0 && point.hbl_y > 0) // 'X' Is -ve ANd 'Y' is +ve
				point_proterties.hbl_quadrant = 2;
			else if (point.hbl_x < 0 && point.hbl_y < 0) // 'X' Is -ve ANd 'Y' Is -ve
				point_proterties.hbl_quadrant = 3;
			else                                         // 'X' Is +ve ANd Is -ve
				point_proterties.hbl_quadrant = 4; 

			printf("The Point Lies  In Quadrant Number %d !!! \n\n",point_proterties.hbl_quadrant);

		}
	}

}
