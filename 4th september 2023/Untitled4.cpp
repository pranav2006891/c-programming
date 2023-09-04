//swapping two numbers//
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("please enter the value of a \n");
	scanf("%d",&a);
	printf("please enter the value of b \n");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("the value of a is %d \n",a);
	printf("the value of b is %d \n",b);
	return 0;
}
