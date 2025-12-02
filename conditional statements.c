#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>6)
	{
		printf("greater than 6");
	}
	else 
	{
		if(n==1)
		printf("one");
		if(n==2)
		printf("two");
		if(n==3)
		printf("three");
		if(n==4)
		printf("four");
		if(n==5)
		printf("five");
	}
	return 0;
}