#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);  
    length = strlen(str);

    
    for(int i = 0; i < length / 2; i++) {
        if(str[i] != str[length - 1 - i]) {
            flag = 0;  
            break;
        }
    }

    if(flag)
        printf("The string \"%s\" is a palindrome.\n", str);
    else
        printf("The string \"%s\" is not a palindrome.\n", str);

    return 0;
}
