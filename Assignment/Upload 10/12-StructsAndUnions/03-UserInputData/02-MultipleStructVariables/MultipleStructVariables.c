#include<stdio.h>

struct MyPoint
{
	int x; 
	int y; 
};

int main(void)
{
	//variable declarations 
	struct MyPoint point_A, point_B, point_C, point_D, point_E; //declaraing a 5 struct varaible 

	//code 
	//User Input for the data members of 'struct MyPoint' varaible 'point_A'
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	printf("Enter X-COordinaters for point 'A' : ");
	scanf("%d", &point_A.x);
	printf("Enter Y-COordinaters for point 'A' : ");
	scanf("%d", &point_A.y);

	//User Input for the data members of 'struct MyPoint' varaible 'point_B'
	printf("\n\n");
	printf("Enter X-COordinaters for point 'B' : ");
	scanf("%d", &point_B.x);
	printf("Enter Y-COordinaters for point 'B' : ");
	scanf("%d", &point_B.y);

	//User Input for the data members of 'struct MyPoint' varaible 'point_C'
	printf("\n\n");
	printf("Enter X-COordinaters for point 'C' : ");
	scanf("%d", &point_C.x);
	printf("Enter Y-COordinaters for point 'C' : ");
	scanf("%d", &point_C.y);

	//User Input for the data members of 'struct MyPoint' varaible 'point_D'
	printf("\n\n");
	printf("Enter X-COordinaters for point 'D' : ");
	scanf("%d", &point_D.x);
	printf("Enter Y-COordinaters for point 'D' : ");
	scanf("%d", &point_D.y);

	//User Input for the data members of 'struct MyPoint' varaible 'point_E'
	printf("\n\n");
	printf("Enter X-COordinaters for point 'E' : ");
	scanf("%d", &point_E.x);
	printf("Enter Y-COordinaters for point 'E' : ");
	scanf("%d", &point_E.y);

	//Displaying Values Of the memeber of 'struct MyPoint' (all varaibles )
	printf("\n\n");
	printf("Co-ordinates (x,y) Of Point 'A' are : (%d, %d) \n\n", point_A.x, point_A.y);
	printf("Co-ordinates (x,y) Of Point 'B' are : (%d, %d) \n\n", point_B.x, point_B.y);
	printf("Co-ordinates (x,y) Of Point 'C' are : (%d, %d) \n\n", point_C.x, point_C.y);
	printf("Co-ordinates (x,y) Of Point 'D' are : (%d, %d) \n\n", point_D.x, point_D.y);
	printf("Co-ordinates (x,y) Of Point 'E' are : (%d, %d) \n\n", point_E.x, point_E.y);

	return(0);


}