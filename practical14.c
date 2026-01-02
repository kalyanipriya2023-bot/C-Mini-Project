#include <stdio.h>


int calculateTotal(int marks[], int n) {
    int total = 0;
    for(int i = 0; i < n; i++) {
        total += marks[i];
    }
    return total;
}


float calculateAverage(int total, int n) {
    return (float)total / n;
}


char determineGrade(float avg) {
    if(avg >= 90)
        return 'A';
    else if(avg >= 80)
        return 'B';
    else if(avg >= 70)
        return 'C';
    else if(avg >= 60)
        return 'D';
    else
        return 'F';
}

int main() {
    int n;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    int marks[n];

    
    for(int i = 0; i < n; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    int total = calculateTotal(marks, n);
    float average = calculateAverage(total, n);
    char grade = determineGrade(average);

    printf("\nTotal Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}
