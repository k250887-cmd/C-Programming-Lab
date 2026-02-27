#include <stdio.h>

int main() {
    int num;
    int evencount = 0, oddcount = 0;
    char choice;

    do {
        
        printf("Enter a number: ");
        scanf("%d", &num);

        
        if (num % 2 == 0) {
            printf("%d is Even.\n", num);
            evencount++;
        } else {
            printf("%d is Odd.\n", num);
            oddcount++;
        }


        printf("Do you want to continue? (Y/N): ");
        scanf(" %c", &choice); 

    } while ( choice == 'Y');

  
    printf("\nTotal Even numbers entered: %d\n", evencount);
    printf("Total Odd numbers entered: %d\n", oddcount);

    return 0;
}


