//whether the triangle is scalene or isosceles or equvilateral//
#include<stdio.h>
int main()
{
	float a, b, c;
	printf("enter the length of side a");
	scanf("%f",&a);
	printf("enter the length of side b");
	scanf("%f",&b);
	printf("enter the length of side c");
	scanf("%f",&c);
	if(a==b&&a==c)
	{
		printf("given triangle is equvilateral");
	}
	else if(a==b||b==c||c==a)
	{
		printf("given triangle is isosceles");
	}
	else
	{
		printf("given triangle is scalene");
	}
	return 0;
}
