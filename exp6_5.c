#include <stdio.h>
#include <string.h>

void REVERSE(char *str) {
    int len = strlen(str);
    int start = 0;
    int end = len - 1;
    char temp;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char inputString[256];

    printf("Enter a string to reverse: ");
    fgets(inputString, sizeof(inputString), stdin);

    inputString[strcspn(inputString, "\n")] = '\0';

    printf("Original string: %s\n", inputString);

    REVERSE(inputString);

    printf("Reversed string: %s\n", inputString);

    return 0;
}