#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';
    double d = 25.678;

    printf("Integer value: %d\n", a);
    printf("Size of int: %lu bytes\n\n", sizeof(a));

    printf("Float value: %.2f\n", b);
    printf("Size of float: %lu bytes\n\n", sizeof(b));

    printf("Character value: %c\n", c);
    printf("Size of char: %lu bytes\n\n", sizeof(c));

    printf("Double value: %.3lf\n", d);
    printf("Size of double: %lu bytes\n", sizeof(d));

    return 0;
}
