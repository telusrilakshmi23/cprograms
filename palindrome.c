#include<stdio.h>
int main()
{
	int n,sum=0,t,remainder;
	printf("enter an integer \n");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		remainder=n%10;
		sum=sum*10+remainder;
		n=n/10;
	}
	if(t==sum)
	printf("%d is palindrome number",t);
	else
	printf("%d is not a palindrome",t);
	return 0;
	
	}