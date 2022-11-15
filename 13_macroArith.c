#include <stdio.h>
#define ADD(x,y) (x+y)
#define SUBTRACT(x,y) (x-y)
#define MULTIPLY(x,y) (x*y)
#define DIVIDE(x,y) (float)(x/y)

int main()
{
    int a,b;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    printf("\nSum : %d", ADD(a,b));
    printf("\nDifference : %d", SUBTRACT(a,b));
    printf("\nProduct : %d", MULTIPLY(a,b));
    printf("\nDivision : %f", DIVIDE(a,b));
    return 0;
}