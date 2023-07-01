#include<stdio.h>

//Definging Struct 
struct MyPoint 
{
	int x; 
	int y;
};

//Defining Struct
struct MyPointProperties 
{
	int quadrant;
	char axis_location[10];

};

int main(void)
{
	//variable declarations 
	struct MyPoint point; // Declarating a sing le variable of type 'struct MyPoint' lcoally 
	struct MyPointProperties point_properties; //Deckaring a single variable of type 'struct MyPointProperties' locally....

	//code 
	//User Input for the data memeber of 'struct MyPoint' varaible  'point_A'
	printf("Harshal Lakare \n\n");
	printf("Enter X-Coordinate For A point : ");
	scanf("%d", &point.x);
	printf("Enter Y-Coordinate For A point : ");
	scanf("%d", &point.y);

	printf("\n\n");
	printf("Point Co-ordinates (x,y) Are : (%d, %d) !!!\n\n", point.x , point.y);

	if (point.x == 0 && point.y == 0)
		printf("The Point Is the origin (%d, %d) !!!\n", point.x , point.y);
	else //Atleast One of the two vlaue (either 'X' or 'Y' or Both) is a non-zero vlaue...
	{
		if (point.x == 0) // If 'X' Is Zero ....Obviously 'Y' Is the Non-zero Value 
		{
			if (point.y < 0) //If 'Y' Is -ve 
				strcpy(point_properties.axis_location,"Negative Y");
			
			if (point.y > 0) //If 'Y' Is +ve
				strcpy(point_properties.axis_location,"Positive Y");

			point_properties.quadrant = 0; // A Point Lying On Any Of The Co-ordinated Axes Is Not a part of any Quadrant....
			printf("The Point Lies On The %s Axis !!!\n\n", point_properties.axis_location);



		}
		else if (point.y == 0) // If 'Y' Is Zero...Obviously 'X' Is the Non-zero Value 
		{
			if (point.x < 0) // If 'X' IS -ve
				strcpy(point_properties.axis_location,"Negative X");

			if (point.x > 0) // If 'X' IS +ve
				strcpy(point_properties.axis_location,"Positive X");
			point_properties.quadrant = 0; // A point Lying on ANy Of the co-ordinate Axes Is not A part Of ANy Quadrant... 
			printf("The Point Lies On The %s Axis !!!\n\n", point_properties.axis_location);
		}
		else // Both 'X' And 'Y' Are Non-zero
		{
			point_properties.axis_location[0] = '\0'; // A Point Lying In Any Of The 4 Quadrants Cannot Be lying On ANy Of the Co-ordinates Axes .... 

			if (point.x > 0 && point.y > 0)	// 'X' is +ve And 'Y' Is +ve 
				point_properties.quadrant = 1;

			else if (point.x < 0 && point.y > 0) //'X' Is -ve ANd 'Y' Is +ve 
				point_properties.quadrant = 2;

			else if (point.x < 0 && point.y < 0) // 'X' Is -ve And 'Y' Is -ve 
				point_properties.quadrant = 3;

			else
				point_properties.quadrant = 4; //'X' IS +ve ANd 'Y' -ve 

			printf("The Point Lies In Quadrant Number %d !!!!\n\n", point_properties.quadrant);

		}
	}


	return(0);
}
