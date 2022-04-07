#include<stdio.h>
int main()
{
	int a,b,c;
	float Add,Average;
	
	printf("Enter 1st number: ");
	scanf("%d",&a);
	printf("Enter 2nd number: ");
	scanf("%d",&b);
	printf("Enter 3rd number: ");
	scanf("%d",&c);
	
	Add= a+b+c;
	Average= Add/3;
	
	printf("The Average of three number is %f",Average);
	
	return 0;	
}
