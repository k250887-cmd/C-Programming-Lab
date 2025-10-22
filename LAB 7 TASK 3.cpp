#include<stdio.h>
#include<string.h>

int main()
{
	char str[25];
	char target;
	int targetcount=0;
	printf("Enter string to search:");
	scanf("%s",str);
	printf("\nEnter you target letter:");
	scanf(" %c",&target);
	
	for(int i=0;i<=24;i++)
	{
		if(str[i]==target)
		targetcount++;
	}
	if(targetcount==0)
	printf("The target count not been found\n");
	else
	printf("Target found %d times",targetcount);
}

