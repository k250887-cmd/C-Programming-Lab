#include <stdio.h>
int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%s",str);  

    for (i=0; str[i]!='\0'; i++) {
        
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' ||
            str[i]=='o' || str[i]=='u') {

            str[i] = str[i] - 32;
        }
    }

    printf("\nModified string: %s", str);

    return 0;
}

