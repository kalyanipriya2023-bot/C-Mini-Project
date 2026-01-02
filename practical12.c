#include <stdio.h>


int square(int n) {
    return n * n;
}

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = square(num);

    printf("Square of %d is: %d\n", num, result);

    return 0;
}
