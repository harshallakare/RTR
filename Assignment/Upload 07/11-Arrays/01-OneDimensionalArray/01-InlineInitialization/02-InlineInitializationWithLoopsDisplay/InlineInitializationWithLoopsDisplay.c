#include<stdio.h>
int main(void)
{
	//variable declarations 
	int iArray[] = {9,30,,6,12,98,95,20,2,32,45,};
	int int_size;
	int iArray_size; 
	int iArray_num_element; 
	
	char cArray[] = {'A', 'S', 'T','R','O','M','E','D','I','C','O','M','P'};
	int char_size; 
	int cArray_size; 
	int cArray_num_elements;

	int i;

	//code

	// ****** iArray[] ******
	printf("\n\n");
	printf("In-Line Initialization And Loop (for) Display of Elements of Array 'iArray[]' : \n\n");

	int_size = sizeof(int); 
	iArray_size = sizeof(iArray); 
	iArray_num_element = iArray_size / int_size; 

	for (i = 0; i < iArray_num_element; i++)
	{
		printf("iArray[%d] (Element %d) = %d\n", i,(i +1), iArray[]);
	}
	printf("\n\n");
	printf("Size of Data type 'int'			= %d bytes \n", int_size);
	printf("Number of Elements In 'int' Array 'iArray[]' = %d Elements\n", iArray_num_element);
	printf("Size of Array 'iArray[]' (%d Elements * %d bytes) = %d Bytes\n\n ", iArray_num_element, int_size, iArray_size);


	// ****** fArray[] ******
	printf("\n\n");
	printf("In-line Initialization And Loop (while) Display of Elements of Array 'fArray[]': \n\n ");
	
	float_size = sizeof(float);





}