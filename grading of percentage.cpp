//grading given percentage//
#include<stdio.h>
int main()
{
	float a;
	printf("please enter the percentage of marks obtained");
	scanf("%f",&a);
	if(a>=90&&a<=100)
	{
		printf("the grade obtained by you is Grade A");
	}
	else if(a>=80&&a<=90)
	{
		printf("the grade obtained by you is Grade B");
	}
	else if(a>=70&&a<=60)
	{
		printf("the grade obtained by you is Grade C");
	}
	else if(a>=60&&a<=50)
	{
		printf("the grade obtained by you is Grade D");
	}
	else if(a>=50&&a<=40)
	{
		printf("the grade obtained by you is Grade E");
	}
	else
	{
		printf("the grade obtained by you is Grade F");
	}
	return 0;
}
