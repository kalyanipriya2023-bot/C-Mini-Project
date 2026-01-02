#include <stdio.h>

int main() {
    int color;

    
    printf("Enter a number for a color (1 for RED, 2 for YELLOW, 3 for GREEN): ");
    scanf("%d", &color);

    
    switch(color) {
        case 1:
            printf("RED => STOP\n");
            break;
        case 2:
            printf("YELLOW => READY\n");
            break;
        case 3:
            printf("GREEN => GO\n");
            break;
        default:
            printf("Invalid input! Please enter 1, 2, or 3.\n");
    }

    return 0;
}
