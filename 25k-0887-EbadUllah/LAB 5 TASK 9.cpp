#include <stdio.h>

int main() {
    int a, b;  
    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);
    
    printf("\nBitwise Operations:\n");
    printf("a&b  = %d\n",a&b);   
    printf("a|b  = %d\n",a|b);   
    printf("a^b  = %d\n",a^b);   
    printf("~a   = %d\n",~a);      
    printf("a<<1 = %d\n",a<<1);  
    printf("a>>1 = %d\n",a>>1);  

    
}

