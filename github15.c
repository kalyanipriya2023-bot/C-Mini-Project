#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter total electricity units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 1.50;
    } 
    else if (units <= 200) {
        bill = (100 * 1.50) + ((units - 100) * 2.50);
    } 
    else {
        bill = (100 * 1.50) + (100 * 2.50) + ((units - 200) * 4.00);
    }

    printf("Total Electricity Bill = ₹%.2f\n", bill);

    return 0;
}
