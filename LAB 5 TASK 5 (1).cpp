#include <stdio.h>

int main() {
	int course;
	char grade;
	printf("Enter cource num(1,2,3):");
	scanf("%d",&course);
	switch(course)
	{
		case 1:
		case 2:
		case 3:
		 printf("Enter grade for course %d (A,B,C,D,F): ", course);
                      scanf(" %c", &grade); 
		switch(grade)
		{case 'A':
                    printf("A GRADE IN COURSE %d.\n", course);
                    break;
                case 'B':
                    printf("B GRADE IN COURSE  %d.\n", course);
                    break;
                case 'C':
                    printf("C GRADE IN COURSE  %d.\n", course);
                    break;
                case 'D':
                    printf("D GRADE IN COURSE %d.\n", course);
                    break;
                case 'F':
                    printf("YOU FAILED COURSE %d.\n", course);
                    break;
                default:
                    printf("INVALID INPUT %d.\n", course);
            }
            break;

        default:
            printf("Invalid course number!");
    }

		 } 
	

					
			
	
