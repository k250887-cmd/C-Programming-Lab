#include<stdio.h>
int main()
 {  
  int grade; int choose,avg,sum=0;
  int gradeA =0 ;int  gradeB=0; int gradeC=0;
  int Total=0; int average;
  do{ 
  printf("\nEnter your grades (0-100):");
  scanf("%d",&grade);
  if(grade>=70)
  {
  	printf("\nYour grade is %d",grade);
  	gradeA++;
  }
  else if(grade<=70 && grade>=50)
  {
  	printf("\nYour grade is %d",grade);
  	gradeB++;
  }
else
   {
   	printf("\nYour grade is %d",grade);
   	gradeC++;
   }
        Total = gradeA + gradeB + gradeC;
        sum = sum + grade;
    printf("\nDo you want to enter another number (1 for yes/- 1 for no):");
    scanf(" %d",&choose);
  }while(choose == 1);
   
   average=sum/Total;
   printf("\nNO.of Grade above 70 is:%d",gradeA);
   printf("\nNO.of Grade between 50 and 70 is:%d",gradeB);
   printf("\nNO.of Grade below 50 is:%d",gradeC);
   printf("\nAverage = %d",average);}





