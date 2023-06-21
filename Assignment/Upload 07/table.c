#include<stdio.h>

int main(void)
{
	int num;
	printf("Enter a number to print its table\n");
	scanf("%d", &num);
	printf("printing table of %d : \n\n", num);

	int a[10];
	int i; 
	for (i = 0; i < 10; i++)
	{
		a[i] = num * (i + 1);
		printf("%d\n", a[i]);
		
	}
	return(0);
}