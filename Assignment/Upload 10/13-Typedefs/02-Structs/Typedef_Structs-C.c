#include<stdio.h>

#define hbl_MAX_NAME_LENGTH 100

struct Employee
{
	char name[hbl_MAX_NAME_LENGTH];
	unsigned int age; 
	char gender; 
	double salary; 
};
struct MyData
{
	int hbl_i; 
	float hbl_f;
	double hbl_d;
	char hbl_c;
};

int main(void)
{
	//typedefs
	typedef struct Employee  MY_EMPLOYEE_TYPE; 
	typedef struct MyData MY_DATA_TYPE; 

	//varaible declarations 
	struct Employee emp = {"Funny" , 25, 'M', 10000.00};
	MY_EMPLOYEE_TYPE emp_typedef = { "Bunny", 23, 'F', 20400.00 };

	struct MyData md = { 30, 11.45, 26.122017, 'X' }; 
	MY_DATA_TYPE md_typedef; 

	//code 
	md_typedef.hbl_i = 9; 
	md_typedef.hbl_f = 1.5f;
	md_typedef.hbl_d = 8.041997;
	md_typedef.hbl_c = 'H';

	printf("\n\n");
	printf("struct Employee : \n\n");
	printf("emp.name	= %s\n", emp.name);
	printf("emp.age		= %d\n", emp.age);
	printf("emp.gender	= %c\n", emp.gender);
	printf("emp.salary	= %lf\n", emp.salary);

	printf("\n\n");
	printf("MY_EMPLOYEE_TYPE : \n\n");
	printf("emp_typedef.name	=%s\n", emp_typedef.name);
	printf("emp_typedef.age		=%d\n", emp_typedef.age);
	printf("emp_typedef.gender	=%c\n", emp_typedef.gender);
	printf("emp_typedef.salary	=%lf\n", emp_typedef.salary);

	printf("\n\n");
	printf("struct MyData : \n\n");
	printf("md.i = %d\n", md.hbl_i);
	printf("md.f = %f\n", md.hbl_f);
	printf("md.d = %lf\n", md.hbl_d);
	printf("md.c = %c\n", md.hbl_c);

	printf("\n\n");
	printf("MY_DATA_TYPE : \n\n");
	printf("md_typedef.i = %d\n", md_typedef.hbl_i);
	printf("md_typedef.f = %f\n", md_typedef.hbl_f);
	printf("md_typedef.d = %lf\n", md_typedef.hbl_d);
	printf("md_typedef.c = %c\n", md_typedef.hbl_c);


	return(0);

}

