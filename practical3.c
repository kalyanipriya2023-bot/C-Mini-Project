#include <stdio.h>

int main() {
    float price, total = 0.0;
    
    
    for(int i = 1; i <= 5; i++) {
        printf("Enter the price of item %d: ", i);
        scanf("%f", &price);
        total += price;  
    }

    
    printf("Total bill for 5 items is: %.2f\n", total);

    return 0;
}
