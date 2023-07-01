#include<stdio.h>

//Defining Struct 
struct MyData 
{
	int i; 
	float f; 
	double d; 
};

int main(void)
{
	//variable declarations 
	struct MyData data; //Declaring a sing varibale of type 'struct MyData' locally....
	int i_size; 
	int f_size; 
	int d_size; 
	int struct_MyData_size; 

	//code 
	//Assinging Data Value TO the Data Memeber of 'struct MyData'
	data.i = 30; 
	data.f = 11.45f;
	data.d = 1.2995;

	//Calculating Size (In Byte) Of The Data Members of 'struct MyData'

	i_size = sizeof(data.i); 
	f_size = sizeof(data.f);
	d_size = sizeof(data.d);


	//Displaying Vlaue of the data members of 'struct MyData'
	printf("Harshal Lakare\n\n");
	printf("\n\n");
	printf("Size (in bytes) Of data member of 'struct MyData' Are  : \n\n");
	printf("Size of 'i' = %d bytes\n", i_size );
	printf("Size of 'f' = %d bytes\n", f_size);
	printf("Size of 'd' = %d bytes\n", d_size);

	
	//Calcluating Size (In Bytes) of the entire 'struct MyData'
	struct_MyData_size = sizeof(struct MyData); //Can also give struct name -> sizeof(MyData)

	//Displaying Size (In Byte) of the entire 'struct MyData'
	printf("\n\n");
	printf("Size of 'struct MyData' : %d bytes\n\n", struct_MyData_size);

	return(0);
}

