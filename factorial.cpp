#include<stdio.h>
#include<conio.h>
int factorial(int);
int main()
{
	int num1,fact;
	printf("Enter the number ");
	scanf("%d",&num1);	
	fact=factorial(num1);	
	printf("The factorial of %d is %d",num1,fact);
}

int factorial(int f)
{
	int x=f-1;
	if(f==0)
	{
		return 1;
	}
	else
	{
		return (f*factorial(x));
	}
}

