#include <stdio.h>

int main() {
    int num[5];     
    int add[5];         
    int subtract[5];    
    int multiply[5];   
  
     printf("Enter 5 numbers:\n");
    for (int i=0; i<5; i++) {
        printf("Number : ");
        scanf("%d", &num[i]);
    }
    for (int i=0; i<5; i++) {
        add[i] = num[i] + 10;
        subtract[i] = num[i] - 5;
        multiply[i] = num[i] * 2;
    }

    printf("\nOriginal Numbers and Their Results:\n");
    printf("Number\t +10\t -5\t *2\n");
   
    for (int i = 0; i < 5; i++) {
        printf("%d\t  %d\t  %d\t  %d\n", num[i], add[i], subtract[i], multiply[i]);
    }

    return 0;
}

