#include <stdio.h>

int main() {
    int choice = 1; 
    int num, i;

    while(choice != 0) {
        
        printf("\nMenu:\n");
        printf("1. Print Multiplication Table\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Enter a number: ");
            scanf("%d", &num);

            printf("Multiplication table of %d:\n", num);
            for(i = 1; i <= 10; i++) {
                printf("%d x %d = %d\n", num, i, num * i);
            }
        } 
        else if(choice == 0) {
            printf("Exiting program...\n");
        } 
        else {
            printf("Invalid choice! Please enter 1 or 0.\n");
        }
    }

    return 0;
}
