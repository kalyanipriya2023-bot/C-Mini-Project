#include <stdio.h>

int main() {
    int i, j, rows, cols;

    
    printf("(a) Rectangle 7x4:\n");
    rows = 4;
    cols = 7;
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= cols; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    
    printf("(b) Right Angle Triangle 4 rows:\n");
    rows = 4;
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    
    printf("(c) Square 4x4:\n");
    rows = 4;
    cols = 4;
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= cols; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    
    printf("(d) Reverse Right Angle Triangle 5 rows:\n");
    rows = 5;
    for(i = rows; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    
    printf("(e) Central Triangle (Pyramid) 5 rows:\n");
    rows = 5;
    for(i = 1; i <= rows; i++) {
        
        for(j = 1; j <= rows
