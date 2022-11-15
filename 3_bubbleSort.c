#include <stdio.h>
void main()
{
    int a[5];
    printf("enter your numbers : \n");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if (a[j] < a[i])
            {
                a[i]= a[i] + a[j];
                a[j]= a[i] - a[j];
                a[i]= a[i] - a[j];
            }
            
        }
    }
    printf("ascending order is : \n");
    for(int i=0; i<5; i++)
    {
        printf("%d  ",a[i]);
    }
}