#include<stdio.h>
int main()
{
	int temp,sum;
	printf("Original array\n");
int arr[]={1,2,3,4,5,6,7,8,9,10};
for(int i=0;i<10;i++){


printf("%d \n ",arr[i]);}
printf("");
 
 
 for(int i=0;i<5;i++){
 
 temp=arr[9-i];
 arr[9-i]=arr[i];
 arr[i]=temp;}
 printf("Reverse array is:\n");
 
 for(int j=0;j<10;j++){
 
 sum = sum + arr[j];
 printf("%d\n",arr[j]);}
 printf("Sum is %d",sum);
 
 
  
}
