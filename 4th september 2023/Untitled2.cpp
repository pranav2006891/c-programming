/*This programme is about all arthemethic operations*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c, d, e, f;
	printf("please enter the values of a and b");	
	scanf("%d %d",&a ,&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	printf("the addition of those two numbers is %d \n",c);
	printf("the value of a-b is %d \n",d);
	printf("the product of given numbers is %d\n",e);
	printf("the value of a/b is %d \n",f);
	return 0;
}
