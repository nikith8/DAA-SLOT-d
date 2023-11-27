#include <stdio.h>
#include <stdlib.h> 
#include <ctype.h> 
int reverseNumber(int num) {
    int reversedNum = 0;

    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return reversedNum;
}

int main() {
    char input[100];
    printf("Enter a number: ");
    fgets(input, sizeof(input), stdin);

    for (int i = 0; input[i] != '\0'; i++) {
        if (!isdigit(input[i]) && input[i] != '\n') {
            printf("Illegal input\n");
            return 1; 
        }
    }

    char *endptr;
    long number = strtol(input, &endptr, 10);

    if (*endptr != '\0' && *endptr != '\n') {
        printf("Illegal input\n");
        return 1; 
    }
    int reversedNumber = reverseNumber(number);

    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}