#include <stdio.h>

int main() {
    float balance;

    printf("Enter initial bank balance: ");
    scanf("%f", &balance);

    
    balance += balance * 0.10;
    printf("After adding interest (10%%): %.2f\n", balance);

    
    balance -= balance * 0.05;
    printf("After deducting charges (5%%): %.2f\n", balance);

    
    balance *= 1.20;
    printf("After applying bonus (20%% increase): %.2f\n", balance);

    
    balance /= 2;
    printf("After division by 2: %.2f\n", balance);

    return 0;
}
