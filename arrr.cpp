#include<stdio.h>
int main()
{
	int i;
	float arr[5];
	printf("enter the marks of 5 students:");
	
	for(i=0;i<5;i++)
	{
		scanf("%f",&arr[i]);
	}
	printf("\n the entered marks\n");
	for(i=0;i<5;i++)
	{
		printf("\narr[%d]=%f",i,arr[i]);
	}
	return 0;
	
}