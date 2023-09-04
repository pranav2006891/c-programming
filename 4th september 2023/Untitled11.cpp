//to clculate complete salary//
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d;
	printf("enter the basic salary");
	scanf("%f",&a);
	b=0.45*a;
	c=0.60*a;
	d= a+b+c;
	printf("the value of your complete salary is %f",d);
	return 0;
}
