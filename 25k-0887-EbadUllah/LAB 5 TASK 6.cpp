#include <stdio.h>

int main() {
    int x, y,z,largest;

    printf("Enter three integers: ");
    scanf("%d %d %d", &x, &y, &z);
    largest = (x>y)?((x>z)?x:z):((y> z)?y:z);
    printf("The largest number is %d\n", largest);
}
