#include <stdio.h>
int main() {
    int scores[10] ={88,75,92,64,70,81,95,78,85,60};
    int temp, i=0;
    float median;
    
    while (i<10) {
        if (scores[i]>scores[i+1]) {
        	
            temp = scores[i];
            scores[i] = scores[i+1];
            scores[i + 1] = temp;

            if (i>0)
            i--;
        } else {
            i++;
        }
    }

    printf("Sorted scores in ascending order:\n");
    for (i=0; i<10; i++) {
        printf("%d ",scores[i]);
    }

    median = (scores[4]+scores[5])/2.0;

    printf("\n Median score = %.2f\n", median);

    return 0;
}

