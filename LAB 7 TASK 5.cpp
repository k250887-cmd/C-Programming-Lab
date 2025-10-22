#include <stdio.h>
int main() {
    int grade[10];
    int i;
    int max, min;
    int index_max = 0, index_min = 0;
    int sum = 0;
    float average;
    printf("Enter the grades of 10 students:\n");
    for (i=0; i<10; i++) {
        printf("Grade of student %d: ", i + 1);
        scanf("%d", &grade[i]);
        sum += grade[i];
    }
    printf("\nGrades of all students:\n");
    for (i=0; i<10; i++) {
        printf("Student %d: %d\n", i + 1, grade[i]);
    }
    average = sum/10.0;
    printf("\nAverage grade of the class = %.2f\n", average);
    max = min = grade[0];
    for (i=1; i<10; i++) {
        if (grade[i] > max) {
            max = grade[i];
            index_max = i;
        }
        if (grade[i] < min) {
            min = grade[i];
            index_min = i;       }    }
    printf("\nHighest grade = %d (at index %d)\n", max, index_max);
    printf("Lowest grade  = %d (at index %d)\n", min, index_min);

    printf("\nEnter new grade for the student with the lowest score: ");
    scanf("%d", &grade[index_min]);

    printf("\nUpdated Grades:\n");
    for (i = 0; i < 10; i++) {
        printf("Student %d: %d\n", i + 1, grade[i]);
    } return 0;
}

