#include<stdio.h>

//Defining Struct 
struct hbl_MyData 
{
	int hbl_i; 
	float hbl_f;
	double hbl_d;
};

int main(void)
{
	//variable declarations 
	struct hbl_MyData hbl_data; //Declaring a sing varibale of type 'struct MyData' locally....
	int hbl_i_size;
	int hbl_f_size;
	int hbl_d_size;
	int hbl_struct_MyData_size;

	//code 
	//Assinging Data Value TO the Data Memeber of 'struct MyData'
	hbl_data.hbl_i = 30;
	hbl_data.hbl_f = 11.45f;
	hbl_data.hbl_f = 11.45f;
	hbl_data.hbl_d = 1.2995;

	//Calculating Size (In Byte) Of The Data Members of 'struct MyData'

	hbl_i_size = sizeof(hbl_data.hbl_i);
	hbl_f_size = sizeof(hbl_data.hbl_f);
	hbl_d_size = sizeof(hbl_data.hbl_d);


	//Displaying Vlaue of the data members of 'struct MyData'
	printf("Harshal Lakare\n\n");
	printf("\n\n");
	printf("Size (in bytes) Of data member of 'struct hbl_MyData' Are  : \n\n");
	printf("Size of 'hbl_i' = %d bytes\n", hbl_i_size );
	printf("Size of 'hbl_f' = %d bytes\n", hbl_f_size);
	printf("Size of 'hbl_d' = %d bytes\n", hbl_d_size);

	
	//Calcluating Size (In Bytes) of the entire 'struct MyData'
	hbl_struct_MyData_size = sizeof(struct hbl_MyData); //Can also give struct name -> sizeof(MyData)

	//Displaying Size (In Byte) of the entire 'struct MyData'
	printf("\n\n");
	printf("Size of 'struct hbl_MyData' : %d bytes\n\n", hbl_struct_MyData_size);

	return(0);
}

