#include <stdio.h>

int main() {
    int day;
    float units, total = 0.0;

    
    for(day = 1; day <= 7; day++) {
        printf("Enter electricity usage (in units) for day %d: ", day);
        scanf("%f", &units);
        total += units;  
    }

    
    printf("Total electricity consumption for the week is: %.2f units\n", total);

    return 0;
}
