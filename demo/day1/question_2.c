//Write a program to Print multiplication table of a given number. 

#include <stdio.h>

int main() {
    int n;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Print multiplication table
    printf("Multiplication table of %d:\n", n);

    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}