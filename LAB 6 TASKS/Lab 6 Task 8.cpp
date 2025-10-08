#include<stdio.h>
int main()
 {  
   int n,prod=1;
   printf("Enter a number whose table is required:");
   scanf("%d",&n);
   for(int i=1;i<=10;i++)
   {
   	prod = n * i;
   	
   	printf("%d x %d = %d \n",n,i,prod);}
   	return 0;
}
