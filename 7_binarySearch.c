#include <stdio.h>

void bubbleSort(int a[])
{
    for(int i=0; i<10; i++)
        for(int j=i+1; j<10; j++)
            if (a[j] < a[i])
            {
                a[i]= a[i] + a[j];
                a[j]= a[i] - a[j];
                a[i]= a[i] - a[j];
            } 
}

int binarySearch(int a[], int n)
{
    int min = 0, max = 9, mid;
    while (min <= max)
    {
        mid = (min + max)/2;
        if(n == a[mid])
            return mid;
        else if(n < a[mid])
            max = mid - 1;
        else if(n > a[mid])
            min = mid + 1;
    }
    return -1;
}

void main()
{
    int a[10],n;
    printf("Enter 10 elements in array : \n");
    for(int i=0; i<10; i++)
        scanf("%d",&a[i]);
    bubbleSort(a);
    printf("\nSorted array is : \n");
    for(int i=0; i<10; i++)
        printf("%d ",a[i]);
    printf("\nEnter no. to search : ");
    scanf("%d",&n);
    int ans = binarySearch(a,n);
    if(ans >= 0)
        printf("%d is at location : %d", n, ans+1);
    else
        printf("no such element found.");
}