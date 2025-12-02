#include<stdio.h>
/*
AVERAGE OF TWO NUMBERS
FORMULA => (a+b+c)/3
EXAMPLE :a=1,b=2,c=3 ; average=2
*/
int main()
{
	int a,b,c;
	printf("enter the values of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	int A= (a+b+c)/3;
	printf("the average of three numbers is : %d",A);
	return 0;
}