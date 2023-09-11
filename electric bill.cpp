//this programme is to calculate the value of electric bill//
#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	float b, c, d;
	printf("please enter the power consumed in Kilo Watt Hour");
	scanf("%d",&a);
	if(a>=0&&a<=100)
	{
		b=a*2;
		printf("the value of your current bill is %f",b);
	}
	else if(a>=101&&a<=250)
	{
		c=a*3.5;
		printf("the value of your current bill is %f",c);
	}
	else
	{
		d=a*5;
		printf("the value of your current bill is %f",d);
	}
	return 0;
}

