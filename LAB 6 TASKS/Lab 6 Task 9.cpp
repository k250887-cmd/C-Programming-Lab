#include<stdio.h>
int main()
 {  
   int num;
   char choose;
   int smallest,first=1;
    int largest;
    do{
    	printf("\nEnter a number:");
    	scanf("%d",&num);
    	
            if (first)
        {
            largest=smallest=num;
            first=0;
        }
        else
        {
            if (num>largest)
                largest=num;
            if (num<smallest)
                smallest=num;
        }

        printf("Current largest number: %d\n", largest);
        printf("Current smallest number: %d\n", smallest);
	
        printf("\nDo you want to enter another number (Y/N):");
        scanf(" %c",&choose);
  }while(choose == 'Y');
  
  printf("\nSmallest Number is:%d",smallest);
  printf("\nLargest Number is:%d",largest);
  
   return 0;}
    
