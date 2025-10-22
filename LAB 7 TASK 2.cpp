#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
int evensum=0;
int oddsum=0;
for(int i=0;i<10;i++)
{
	if(arr[i]%2==0){
	
	evensum=evensum+arr[i];}
	
	else if(arr[i]%2!=0)
	{
	
	oddsum=oddsum+arr[i];}
	else{
	
	printf("Neither even nor odd");}
}
	printf("\nSum of even numbers=%d",evensum);
		printf("\nSum of even numbers=%d",oddsum);
}

