#include <stdio.h>
int main() {
    int n, i;
     int first = 0; int second = 1; 
    int next, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }
     printf("Fibonacci Sequence up to %d terms:\n", n);

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%ld ", first);
            sum = sum + first;
        }
        else if (i == 2) {
            printf("%ld ", second);
            sum = sum + second;
        }
        else {
            next = first + second;
            first = second;
            second = next;
            printf("%ld ", next);
            sum = sum + next;
        }
    }   printf("\nSum of Fibonacci sequence up to %d terms: %ld\n", n, sum);
    return 0;
    }


