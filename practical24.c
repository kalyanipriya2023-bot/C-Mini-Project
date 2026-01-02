#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    
    float average = (float)sum / n;

    printf("Sum of the elements: %d\n", sum);
    printf("Average of the elements: %.2f\n", average);

    return 0;
}
