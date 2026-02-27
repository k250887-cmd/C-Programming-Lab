#include<stdio.h>
int main()
 {  
   int transaction;
   int withdrawl=0;
   int deposit=0;
   int balance=5000;
   int choose;
   do{
   	printf("\nEnter the amount for transaction:");
   	scanf("%d",&transaction);
   	if(transaction>0){
   		printf("\nYou deposited %d amount",transaction);
   		deposit++;
   		balance = balance + transaction;
   		printf("\nBalance=%d",balance);
	   }
	   else{
	   
	printf("\nYou withdrawled %d amount",transaction);
   	withdrawl++;
   		balance = balance + transaction;
   		printf("\nBalance=%d",balance);
		   }
            printf("\nDo you want to do another transaction(0/1):");
            scanf(" %d",&choose);
  }while(choose==1);
  
   printf("\nNumber of withdrawl:%d",withdrawl);
    printf("\nNumber of dposits:%d",deposit);
   printf("\nFinal Balance:%d",balance);		
   return 0;	   
}
   
   
   
