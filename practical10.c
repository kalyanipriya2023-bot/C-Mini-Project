#include <stdio.h>

int main() {
    int day;

    printf("Enter day number (1-Monday, 2-Tuesday, ..., 6-Saturday): ");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("Monday: Math, Physics\n");
            break;
        case 2:
            printf("Tuesday: Chemistry, English\n");
            break;
        case 3:
            printf("Wednesday: Biology, Computer Science\n");
            break;
        case 4:
            printf("Thursday: Physics, History\n");
            break;
        case 5:
            printf("Friday: Math, Geography\n");
            break;
        case 6:
            printf("Saturday: Computer Lab, Sports\n");
            break;
        default:
            printf("Invalid input! Enter a number between 1 and 6.\n");
    }

    return 0;
}
