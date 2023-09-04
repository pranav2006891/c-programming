/*percentage of a student given his 5 subject marks*/
#include<stdio.h>
int main()
{
	float a, b, c, d, e, f, g, h, i, j;
	printf("enter the marks in first subject= \n");
	scanf("%f",&a);
	printf("enter the marks in second subject= \n");
	scanf("%f",&b);
	printf("enter the marks in third subject= \n");
	scanf("%f",&c);
	printf("enter the marks in fourth subject= \n");
	scanf("%f",&d);
	printf("enter the marks in fifth subject= \n");
	scanf("%f",&e);
	printf("enter the maximum marks= \n");
	scanf("%f",&f);
	g=a+b+c+d+e;
	h=g;
	i=h/f;
	j=i*100;
	printf("the percentage obtained by the student is %f",j);
	return 0;
}
