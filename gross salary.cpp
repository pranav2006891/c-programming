//gross salary given basic salary//
#include<stdio.h>
int main()
{
	float a, b,c;
	printf("enter the basic salary");
	scanf("%f",&a);
	printf("enter which tier city u live in");
	scanf("%f",&c);
	if(c==1)
	{
		b=1.76*a;
		printf("the gross salary is %f",b);
	}
	else if(c==2)
	{
		b=1.72*a;
	printf("the gross salary is %f",b);
	}
	else
	{
		b=1.68;
		printf("the gross salary is %f",b);
	}
	return 0;
}
