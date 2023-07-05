#include<stdio.h>

//Defining struct 
struct hbl_MyPoint
{
	int hbl_x;
	int hbl_y;

};

//Defining struct 
struct hbl_MyPointProperties
{
	int hbl_quadrant;
	char hbl_axis_lcoation[10];
};

struct hbl_MyPoint point; //declaring a single varibale of type 'struct Mypoint' globally 
struct hbl_MyPointProperties point_properties; //declaraing a single variable of type 'struct MyPointProperties' globally 

int main(void)
{
	//code 
	//User Input for the Data Members of 'struct MyPoint' varaible 'point_A'
	printf("\n\n");
	printf("Enter hbl_X-cordinates For hbl_A point : ");
	scanf("%d", &point.hbl_x);
	printf("Enter hbl_Y-Coordinate For hbl_A point : ");
	scanf("%d", &point.hbl_y);

	printf("\n\n");
	printf("Point Co-ordinates (hbl_x,hbl_y) Are : (%d, %d) !!!\n\n", point.hbl_x,point.hbl_y);

	if (point.hbl_x == 0 && point.hbl_y == 0)
		printf("The Point is the origin (%d, %d) !!!\n", point.hbl_x, point.hbl_y);
	else // Atleast one of the two values (either 'X' or 'Y' or Both) is a non-zero value 
	{
		if (point.hbl_x == 0) //If 'X' IS zero ....obviously 'Y' Is the non-zero value 
		{
			if (point.hbl_y < 0) // If 'Y' Is -ve 
				strcpy(point_properties.hbl_axis_lcoation, "Negattive hbl_Y");
			if (point.hbl_y > 0) //If 'Y' is +ve
				strcpy(point_properties.hbl_axis_lcoation, "Positive hbl_Y");

			point_properties.hbl_quadrant = 0; //A point Lying on Any of the co-ordinates Axes Is not a part of any quadrant....
			printf("The point Lies on the %s Axis !!! \n", point_properties.hbl_axis_lcoation);
		}
		else if (point.hbl_y == 0) //If 'Y' Is zero....abviously 'X' IS the non-zero value
		{
			if (point.hbl_x < 0) //If 'X' Is -ve 
				strcpy(point_properties.hbl_axis_lcoation,"Negative X");

			if (point.hbl_x > 0) //If 'X' is +ve
				//strcpy(point_properties.hbl_axis_location, "Positive X"); 
				strcpy(point_properties.hbl_axis_lcoation, "Positive X");

			point_properties.hbl_quadrant; // A point Lying On Any of the co-ordinates Axes Is not a part of ANy Quadrant....
			printf("The Point Lies On the %s Axis !!!\n\n", point_properties.hbl_axis_lcoation );

		}
		else //Both 'X' And 'Y' Are Non-zero
		{
			point_properties.hbl_axis_lcoation[0] = '\0';  //A point Lying in Any of the 4 Quadrants Canont be lying on the co-ordinates axes...
		if (point.hbl_x > 0 && point.hbl_y > 0)
			point_properties.hbl_quadrant = 1;
		else if (point.hbl_x < 0 && point.hbl_y > 0) // 'X' Is -ve And 'Y' Is +ve 
			point_properties.hbl_quadrant = 2;
		else if (point.hbl_x < 0 && point.hbl_y < 0) // 'X' Is -ve and 'Y' Is -ve 
			point_properties.hbl_quadrant = 3;

		else
			point_properties.hbl_quadrant = 4; 

		printf("The Point Lies In Quadrant Number %d !!!\n\n", point_properties.hbl_quadrant);

		}

	}
	return(0);
}