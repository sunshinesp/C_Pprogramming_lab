#include <stdio.h>

void swap(int *a, int *b)        // Call by Reference
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main()
{
    int a,b;
    printf("Enter A : ");
    scanf("%d",&a);
    printf("Enter B : ");
    scanf("%d",&b);
    swap(&a, &b);
    printf("Values after Swapping \n");
    printf("A : %d\n",a);
    printf("B : %d",b);
}