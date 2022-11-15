#include <stdio.h>

int main()
{
    int a[10], n, r=0;
    printf("Enter 10 numbers in array : \n");
    for(int i=0; i<10; i++)
        scanf("%d", &a[i]);
    printf("Enter the no. to search : ");
    scanf("%d", &n);
    for(int i=0; i<10; i++)
    {
        if(a[i] == n)
        {
            printf("%d is at Position : %d\n", n, i+1);
            r = 1;
        }
    }
    if(r == 0)
        printf("%d is not present in this array;", n);
    return 0;
}