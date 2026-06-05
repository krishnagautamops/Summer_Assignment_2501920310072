/*
Write a program to calculate the factorial of a given number using a for loop
*/
#include <stdio.h>
int main()
{
    int product = 1;
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }

    printf("the factorial of 5 is %d", product );

    return 0;
}