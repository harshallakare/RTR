#include<stdio.h>
int main(void)
{
	//varibale declarations 
	float f;
	float  f_num = 1.7f; //simply change this value Only to get diffrent output...

	//code 
	printf("Harshal Lakare \n\n");
	printf("\n\n");

	printf("Printing Number %f to %f : \n\n", f_num, (f_num * 10.0f));

	f = f_num; 
	while (f <= (f_num * 10.0f))
	{
		printf("\t%f\n",f);
		f = f + f_num;
	}
	printf("\n\n");

	return(0);

}