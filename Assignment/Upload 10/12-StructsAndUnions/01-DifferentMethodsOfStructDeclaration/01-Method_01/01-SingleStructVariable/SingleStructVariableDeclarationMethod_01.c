#include<stdio.h>

//Defining struct 
struct hbl_MyData
{
	int i; 
	float f; 
	double d; 
	char c; 
} data ; // Declaring a single struct variable of type 'struct MyData' globally ...

int main(void)
{
	//variable declarations 
	int hbl_i_size;
	int hbl_f_size;
	int hbl_d_size;
	int hbl_struct_MyData_size;

	//code 
	//Assigning data values to the data memeber of 'struct MyData'
	data.i = 30; 
	data.f = 11.45f; 
	data.d = 1.2995; 

	//Displaying Vlaue of the data member of 'struct MyData'
	printf("\n\n");
	printf("Data Member of 'struct MyData' Are : \n\n ");
	printf("i = %d\n", data.i);
	printf("f = %f\n", data.f);
	printf("d = %lf\n", data.d);

	// Calculating size(In Byte) Of the Data Members of 'struct MyData'
	hbl_i_size = sizeof(data.i);
	hbl_f_size = sizeof(data.f);
	hbl_d_size = sizeof(data.d);

	//Display Size (In Bytes) Of the Data Members of 'struct MyData'
	printf("\n\n");
	printf("Size (in byte) Of Data Members of 'struct MyData' Are : \n\n");
	printf("Size of 'i' = %d bytes\n", hbl_i_size);
	printf("Size of 'f' = %d bytes\n", hbl_f_size);
	printf("Size of 'd' = %d bytes\n", hbl_d_size);

	//Calculating Size (in Bytes) of the entire 'struct MyData'
	hbl_struct_MyData_size = sizeof(struct hbl_MyData); // can also give struct name -> sizeof(MyData)

	//Displaying Size (In Bytes) Of the entire 'struct MyData'
	printf("\n\n");
	printf("Size of 'struct MyData' : %d bytes \n\n", hbl_struct_MyData_size);

	return(0);

}
