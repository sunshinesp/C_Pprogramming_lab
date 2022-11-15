#include <stdio.h>

void pat1(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<n-i; j++)
            printf(" ");
        for(int j=0; j<(2*i-1); j++)
            printf("*");
        printf("\n");
    }
}

void pat2(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<i; j++)
            printf("%c ",65+n-i+j);
        printf("\n");
    }
}

void pat3(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<i; j++)
            printf("%d ",i+j);
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    printf("\n Pattern 1 : \n");
    pat1(n);
    printf("\n Pattern 2 : \n");
    pat2(n);
    printf("\n Pattern 3 : \n");
    pat3(n);
    return 0;
}