//Write a program to Count digits in a number

#include <stdio.h>

int main() {
    int n, count;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(count = 0; n != 0; count++) {
        n = n / 10;
    }

    if(count == 0)
        count = 1;

    printf("Number of digits = %d\n", count);

    return 0;
}