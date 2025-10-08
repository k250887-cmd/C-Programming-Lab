#include <stdio.h>
int main()
{
	int a,b,add,sub,prod,quot,rem;
	printf("Enter an integer:");
	scanf("%d",&a);
	printf("Enter an integer:");
	scanf("%d",&b);
           add=a+b;
           sub=a-b;
           prod=a*b;
           rem=a%b;
           quot=a/b;
	printf("SUM is %d:",add);
	printf("SUB is %d:",sub);	
           printf("PROD is %d:",prod);
	printf("PROD is %d:",rem);			
	printf("QUOT is %d:",quot);
}
