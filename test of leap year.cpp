//this programme is to whether the given year is leap year//
#include<stdio.h>
#include<math.h>
int main ()
{
	int a;
	printf("please enter the value of the year is ____");
	scanf("%d",&a);
	if(a%4==0&&(a%100!=0||a%400==0))
	{
		printf("the given year is leap year");
	}
	else
	{
		printf("the given year is not a leap year");
	}
	return 0;
}
