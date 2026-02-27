#include <stdio.h>
int main() {
	
    char ch;
    char choice;
    int  vowel = 0;
    do {
        
        printf("Enter a charactr: ");
        scanf(" %c", &ch);

        
        if (ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u' || ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U') {
            printf("\n%c is vowel.\n", ch);
            vowel++;}
            else {

           printf("\nYou entered a consonent.");
        } 
        printf("\nDo you want to continue? (Y/N): ");
        scanf(" %c", &choice); 

    } while ( choice == 'Y');
    printf("\nTotal vowels entered are: %d\n", vowel);
  
    return 0;
}
