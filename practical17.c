#include <stdio.h>

/
void calculate(int *x, int *y, int *sum, int *diff, int *prod, float *quot) {
    *sum = *x + *y;            
    *diff = *x - *y;           
    *prod = (*x) * (*y);       
    *quot = (float)(*x) / (*y); 
}

int main() {
    int a, b;
    int sum, diff, prod;
    float quot;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    
    calculate(&a, &b, &sum, &diff, &prod, &quot);

    printf("\nResults:\n");
    printf("Addition: %d\n", sum);
    printf("Subtraction: %d\n", diff);
    printf("Multiplication: %d\n", prod);
    printf("Division: %.2f\n", quot);

    return 0;
}
