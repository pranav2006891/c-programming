//raj's best bowling techniqe//
#include<stdio.h>
int main()
{
	float a, b, c;
	printf("please enter the rating of first technique a out of 10");
	scanf("%f",&a);
	printf("please enter the rating of first technique b out of 10");
	scanf("%f",&b);
	printf("please enter the rating of first technique c out of 10");
	scanf("%f",&c);
	if(a>b&&a>c)
	{
		printf("please use technique a and its value is %d",a);
	}
	else if(b>c)
	{
		printf("please use technique b and its value is %d",b);
	}
	else
	{
		printf("please use technique c and its value is %d",c);
	}
	return 0;
}
