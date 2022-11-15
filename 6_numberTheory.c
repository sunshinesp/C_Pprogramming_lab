#include <stdio.h>

int gcd_of_two(int a, int b)
{
    for(int i = (a<b) ? a : b; i > 0; i--)
        if((a%i == 0)  &&  (b%i == 0))
            return i;
}
int lcm(int n[], int size)
{
    int ans = n[0];
    for(int i=0; i<size; i++)
        ans = (ans * n[i]) / ( gcd_of_two(ans, n[i]));
    return ans;
}

int gcd(int n[], int size)
{
    int d;
    for(int i=n[0]; ; i--)
    {
        d = 1;
        for(int j=0; j<size; j++)
            if(n[j]%i != 0)
                d = 0;
        if(d)
            return i;
    }
    if(!d)
        return 1;
}

int prime(int n)
{
    int d=1;
    for(int a=2; a <= n/2; a++)
        if(n%a == 0)
            d = 0;
    return d;
}

int armstrong(int n)
{
    int d, s, a=0;
    s = n;
    while(n>0)
    {
        d = n%10;
        a += d*d*d;
        n /= 10;
    }
    if(s == a)
        return 1;
    else
        return 0;
}

void primeFactor(int n)
{
    int factor = 2;
    while(n > 1)
    {
        if(n % factor  ==  0)
        {
            printf("%d ", factor);
            n /= factor;
        }
        else
            factor++;
    }
}

int pallindrome (int n)
{
    int s,d,r=0;
    s = n;
    while(n>0)
    {
        d = n % 10;
        r = r*10 + d;
        n /= 10;
    }
    if(s == r)
        return 1;
    else
        return 0;
}

int main()
{
    int size, number[100];
    printf("Enter no. of elements to operate(<= 100) : ");
    scanf("%d", &size);
    printf("Enter the elements in the array : \n");
    for(int i=0; i<size; i++)
        scanf("%d", &number[i]);

    printf("\n1. LCM of all the elements is : %d", lcm(number,size));

    printf("\n\n2. GCD of all the elements is : %d", gcd(number,size));

    printf("\n\n3. Prime numbers in the array are : ");
    for(int i=0; i<size; i++)
        if(prime(number[i]))
            printf("%d ", number[i]);

    printf("\n\n4. Armstrong numbers in the array are : ");
    for(int i=0; i<size; i++)
        if(armstrong(number[i]))
            printf("%d ", number[i]);

    printf("\n\n5. Respective Prime Factors of all the numbers are : \n");
    for(int i=0; i<size; i++)
    {
        printf("%d : ", number[i]);
        primeFactor(number[i]);
        printf("\n");
    }

    printf("\n6. Pallindrome numbers in the array are : ");
    for(int i=0; i<size; i++)
        if(pallindrome(number[i]))
            printf("%d ", number[i]);
    return 0;
}