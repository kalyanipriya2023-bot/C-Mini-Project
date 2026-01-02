#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int words = 0;
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  
    
    str[strcspn(str, "\n")] = '\0';

    
    while(str[i] != '\0') {
        
        if((i == 0 && !isspace(str[i])) || 
           (isspace(str[i-1]) && !isspace(str[i]))) {
            words++;
        }
        i++;
    }

    printf("Number of words: %d\n", words);

    return 0;
}
