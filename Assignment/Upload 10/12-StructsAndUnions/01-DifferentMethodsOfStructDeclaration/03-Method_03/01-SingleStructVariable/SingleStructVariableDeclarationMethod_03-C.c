#include<stdio.h>

int main(void)
{
	//Defening struct
	struct MyData
	{
		int hbl_i;
		float hbl_f;
		double hbl_d; 
	} hbl_data; //Declaring a single struct varible of type 'struct MyData' locally 

	//variable delcarations 
	int hbl_i_size;
	int hbl_f_size;
	int hbl_d_size;
	int struct_MyData_sizee;

	//code 
	//Asisiging data values to the data emember of 'struct MyData'
	hbl_data.hbl_i = 30; 
	hbl_data.hbl_f = 11.45f;
	hbl_data.hbl_d = 1.2995;

	//Displaying Values iof thge data members of 'struct MyData'
	printf("\n\n");
	printf("Data Members of 'struct MyData' Are \n\n");
	printf("i  = %d\n",hbl_data.hbl_i);
	printf("f  = %f\n", hbl_data.hbl_f);
	printf("d  = %lf\n", hbl_data.hbl_d);

	//Calculating size (In Bytes) Of the data member of 'struct MyData'
	hbl_i_size = sizeof(hbl_data.hbl_i); 
	hbl_f_size = sizeof(hbl_data.hbl_f);
	hbl_d_size = sizeof(hbl_data.hbl_d);

	//Displaying Size (In Bytes) of the data member of 'struct MyData'
	printf("\n\n");
	printf("SIZES (in bytes) OF DATA MEMBERS OF 'struct MyData' Are : \n\n");
	printf("Size of 'i' = %d bytes\n", hbl_i_size);
	printf("Size of 'f' = %d bytes\n", hbl_f_size);
	printf("Size of 'd' = %d bytes\n", hbl_d_size);

	//Calulating Size (In Bytes) Of the entire 'struct MyData'
	struct_MyData_sizee = sizeof(struct MyData); //can also give struct name -> sizeof(MyData)

	//Displaying Size (In Bytes) of the entire 'struct MyData'
	printf("\n\n");
	printf("Size of 'struct MyData' : %d bytes\n\n", struct_MyData_sizee);

	return(0);

}

