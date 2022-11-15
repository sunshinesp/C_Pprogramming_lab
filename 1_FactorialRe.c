/*Write a program in c to calculate factorial of a number using Recursion.*/

#include <stdio.h>

unsigned long long factorial(unsigned long long n)
{
    if(n <= 1)
        return 1;
    else
        return n * factorial(n-1);
}

int main()
{
    unsigned long long n,f;
    printf("Enter a number (<= 65) : ");
    scanf("%llu", &n);
    f = factorial(n);
    printf("Factorial of %llu is : %llu", n,f);
    return 0;
}