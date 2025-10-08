#include<stdio.h>
int main()
 {  
  int n, sum=0;
  char choose;
  do{ 
  printf("\nEnter a number:");
  scanf(" %d",&n);
  
  sum = sum + n;
  printf("\nsum= %d",sum);
  
  printf("\nDo you want to enter another number (Y/N):");
  scanf(" %c",&choose);
  }while(choose == 'Y');
 
  printf("\n The Final sum is : %d",sum);
  return 0;
 
}
