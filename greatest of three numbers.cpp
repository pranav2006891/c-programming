//this programme is to point out greatest of three numbers//
#include<stdio.h>
int main ()
{
	float a, b, c;
	printf("please enter the value of a =");
	scanf("%f",&a);
	printf("please enter the value of b =");
	scanf("%f",&b);
	printf("please enter the value of c =");
	scanf("%f",&c);
	if(a>b&&a>c)
	{
		printf("the greatest of three numbers is a");
	}
	else if(b>c)
	{
		printf("the greatest of three numbers is b");
	}
	else
	{
		printf("the greatest of three numbers is c");
	}
	return 0;
}
