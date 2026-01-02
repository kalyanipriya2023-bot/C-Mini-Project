#include <stdio.h>

int main() {
    float distance, total = 0.0;

    
    for(int day = 1; day <= 30; day++) {
        printf("Enter walking distance (in km) for day %d: ", day);
        scanf("%f", &distance);
        total += distance;  
    }

    
    printf("Total distance walked in the month: %.2f km\n", total);

    return 0;
}
