#include<stdio.h>


int main(void)
{
	//Defecting struct 
	struct MyPoint
	{
		int hbl_x;
		int hbl_y;

	}hbl_point; //delcaring a sing variable of type 'struct MyPoint' lcoally 

	//defining struct 
	struct MyPointProperties
	{
		int hbl_quadrant; 
		char hbl_axis_localtion[10];
	}hbl_point_properties; // delcaring sing variable of type 'struct MyPointProperties' locally...

	//code 
	//user Input for the data memeber of 'struct MyPoint' varibale 'point_A'
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	printf("Enter X-Coordinate for A point : ");
	scanf("%d", &hbl_point.hbl_x);
	printf("Enter Y-COrdinate For A Point : ");
	scanf("%d", &hbl_point.hbl_y);
	
	
	printf("\n\n");
	printf("Point Co-ordinates (x,y) are (%d, %d) !!!\n\n", hbl_point.hbl_x,hbl_point.hbl_y);

	if (hbl_point.hbl_x == 0 && hbl_point.hbl_y == 0)
		printf("The Point Is the Origin (%d, %d) !!!\n", hbl_point.hbl_x , hbl_point.hbl_y);
	else //Atleast One of the two values (either 'X' or 'Y' Or Both ) is a non-zero value...
	{
		if (hbl_point.hbl_x == 0) //If 'X' Is zero....obviosuly 'Y' Is the non-zero value 
		{
			if (hbl_point.hbl_y < 0) //If 'Y' is -ve 
				strcpy(hbl_point_properties.hbl_axis_localtion, "Negative Y");

			if (hbl_point.hbl_y > 0) //If 'Y' Is +ve 
				strcpy(hbl_point_properties.hbl_axis_localtion,"Positive Y");

			hbl_point_properties.hbl_quadrant = 0; //A point Lying on Any Of the co-ordinate Axes Is not a part of any quadrant...
			printf("The Point Lies on the %s Axis !!!\n\n", hbl_point_properties.hbl_axis_localtion);

		}
		else if (hbl_point.hbl_y == 0) //If 'Y' Is zero....obviosuly 'X' is the non-zero value 
		{
			if (hbl_point.hbl_x < 0) // If 'X' Is -ve 
				strcpy(hbl_point_properties.hbl_axis_localtion,"Negative X");
			if (hbl_point.hbl_x > 0) // If 'X' Is +ve 
				strcpy(hbl_point_properties.hbl_axis_localtion,"Positive X");

			hbl_point_properties.hbl_quadrant = 0; //A point Lying On Any of The co-ordinating axes is not a part of any quadrant....
			printf("The point Lies On The %s Axis !!!\n",hbl_point_properties.hbl_axis_localtion);

		}
		else //both 'X' And 'Y' Are Non-zero 
		{
			hbl_point_properties.hbl_axis_localtion[0] = '\0'; //A point Lying In Any of the 4 Quadrants Cannot be lying on any of the co-ordinates axes...

			if (hbl_point.hbl_x > 0 && hbl_point.hbl_y > 0) //'X' Is +ve and 'Y' Is +ve 
				hbl_point_properties.hbl_quadrant = 1;
			else if (hbl_point.hbl_x < 0 && hbl_point.hbl_y > 0) //'X' is -ve and 'Y' is +ve
				hbl_point_properties.hbl_quadrant = 2;
			else if (hbl_point.hbl_x < 0 && hbl_point.hbl_y < 0) //'X' Is -ve And 'Y' is -ve 
				hbl_point_properties.hbl_quadrant = 3;
			else												// 'X' Is +ve And 'Y' Is -ve 
				hbl_point_properties.hbl_quadrant = 4; 
			printf("The Point Lies In Quadrant Number %d !!!\n\n", hbl_point_properties.hbl_quadrant);
		}

	}
	return(0);
}
