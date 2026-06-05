//Write a program to Find product of digits. 
#include <stdio.h>

int main() {
    int n, product = 1, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n == 0) {
        product = 0;
    } else {
        for(; n != 0; n = n / 10) {
            digit = n % 10;
            product *= digit;
        }
    }

    printf("Product of digits = %d\n", product);

    return 0;
}