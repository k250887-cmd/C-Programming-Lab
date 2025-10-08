#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter an integer:");
	scanf("%d",&a);
	printf("Enter an integer:");
	scanf("%d",&b);
	printf("Enter an integer:");
	scanf("%d",&c);

	 if (a>b) {
        if (a>c) {
            printf("The largest number is %d\n", a);
        } else {
            printf("The largest number is %d\n", c);
        }
    } else {
        if (b>c) {
            printf("The largest number is %d\n", b);
        } else {
            printf("The largest number is %d\n", c);
        }
    }
	
	}
