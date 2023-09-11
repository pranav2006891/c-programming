//whether the numbers are equal or not//
#include<stdio.h>
int main()
{
	float a, b, c;
	printf("enter the value of a");
	scanf("%f",&a);
	printf("enter the value of b");
	scanf("%f",&b);
	printf("enter the value of c");
	scanf("%f",&c);
	if(a==b&&a==c)
	{
		printf("all the numbers are equal");
	}
	else if(a==b||b==c||c==a)
	{
		printf("only two of the given numbers are equal");
	}
	else
	{
		printf("none of the given numbers are equal");
	}
	return 0;
}
