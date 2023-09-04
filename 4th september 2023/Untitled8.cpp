//to convert kilometer to metre, centimeter and millimeter//
#include<stdio.h>
int main()
{
	float a, b, c, d;
	printf("please enter the value in kilometer");
	scanf("%f",&a);
	b=a*1000;
	c=a*100000;
	d=a*1000000;
	printf("its value in meter is %f \n",b);
	printf("its value in centimeter is %f \n",c);
	printf("its value in millimeter is %f \n",d);
	return 0;
}
