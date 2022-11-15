#include<stdio.h>

void swap(int a, int b)         // Call by Value
{
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Values after swapping \n");
    printf("A : %d\n",a);
    printf("B : %d",b);
}

void main()
{
    int a,b;
    printf("Enter A : ");
    scanf("%d",&a);
    printf("Enter B : ");
    scanf("%d",&b);
    swap(a,b);
}