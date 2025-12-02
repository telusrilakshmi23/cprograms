#include<stdio.h>
int main()
{
char operator;
int x,y;
printf("enter the expression:");
scanf("%d%c%d",&x,&operator,&y);
switch(operator){
	case'+':
		printf("result:%d\n",x+y);
		break;
		case'-':
		printf("result:%d\n",x-y);
		break;
		case'*':
			printf("result:%d\n",x*y);
			break;
			case'/':
			if(y!=0){
			printf("result:%2f\n",(float)x,y);
			break;
			}
			 else{
			printf("division by zero error!\n");
			break;
		}
			default:
			printf("invalid operator\n");	
}
return 0;
}