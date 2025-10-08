#include <stdio.h>
int main() {
    int n, i, j, count = 0, sum = 0, is_Prime;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d are:\n", n);

    for (i = 2; i <= n; i++) {
        is_Prime = 1;  

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_Prime = 0; 
                break;
            }
        }
        if (is_Prime) {
            printf("%d ", i);
            count++;
            sum += i;
        }
    }

    printf("\n\nTotal prime numbers up to %d = %d\n", n, count);
    printf("Sum of all prime numbers up to %d: %d\n", n, sum);

    return 0;
}

