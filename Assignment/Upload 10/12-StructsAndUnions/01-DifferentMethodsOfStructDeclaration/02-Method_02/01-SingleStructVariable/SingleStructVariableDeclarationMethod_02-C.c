#include <stdio.h>

//defineing struct
struct hbl_MyData
{
	int hbl_i;
	float hbl_f; 
	double hbl_d;

};

struct hbl_MyData data; //declaring a sing struct varibale of type 'struct MyData' globally...

int main(void)
{
	int hbl_i_size; 
	int hbl_f_size; 
	int hbl_d_size;
	int hbl_struct_MyData_size;

	//code 
	//Assigining Data Values To the Data Member of 'Struct MyData'
	data.hbl_i = 30; 
	data.hbl_f = 11.45f;
	data.hbl_d = 1.2995;

	//Displaying Value of the Data Members of 'Struct MyData'
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	printf("Data Member of 'struct hbl_MyData' Are : \n\n");
	printf("i = %d\n", data.hbl_i);
	printf("i = %f\n", data.hbl_f);
	printf("i = %lf\n", data.hbl_d);

	//Calculating Size (In Bytes) Of the Data Member of 'struct MyData'
	hbl_i_size = sizeof(data.hbl_i); 
	hbl_f_size = sizeof(data.hbl_f);
	hbl_d_size = sizeof(data.hbl_d);

	//Displaying Sizes (In Bytes) Of the Data Member Of 'struct MyData' 
	printf("\n\n");
	printf("Sizes (in bytes) Of Data Memeber of 'struct hbl_Mydata' are : \n\n");
	printf("Size of 'i' = %d bytes\n", hbl_i_size);
	printf("Size of 'f' = %d bytes\n", hbl_f_size);
	printf("Size of 'd' = %d bytes\n", hbl_d_size);

	//calculating Size (In Bytes ) of the entire 'Struct MyData'
	hbl_struct_MyData_size = sizeof(struct hbl_MyData); //can also give struct name -> sizeof(MyData)

	//Displaying size (In Bytes) of the entire 'struct MyData'
	printf("\n\n");
	printf("Size of 'struct hbl_MyData' : %d bytes \n\n", hbl_struct_MyData_size);

	return(0);

}
