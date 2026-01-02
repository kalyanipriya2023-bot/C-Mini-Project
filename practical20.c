#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n];  

    
    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    
    for(int i = 0; i < n; i++) {
        sum += numbers[i];
    }

    printf("Sum of the numbers: %d\n", sum);

    return 0;
}
