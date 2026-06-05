//Write a program to Find sum of digits of a number


#include <stdio.h>

int main() {
    int n, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(; n != 0; n = n / 10) {
        digit = n % 10;
        sum += digit;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}