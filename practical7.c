#include <stdio.h>

int main() {
    int attendance, totalPresent = 0;

    
    for(int day = 1; day <= 30; day++) {
        printf("Enter attendance for day %d (1 for present, 0 for absent): ", day);
        scanf("%d", &attendance);

        
        if(attendance == 1) {
            totalPresent++; 
        } else if(attendance != 0) {
            printf("Invalid input! Please enter 1 or 0.\n");
            day--;  
        }
    }

    
    printf("Total days present: %d\n", totalPresent);

    return 0;
}
