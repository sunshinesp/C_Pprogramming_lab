#include <stdio.h>

enum week{
    sun, mon, tue, wed, thurs, fri, sat
};

int main()
{
    enum week w;
    printf("\nsize of a enum week variable : %d", sizeof(w));
    printf("\nEnter a day number(0-6) : ");
    scanf("%d", &w);
    switch (w)
    {
    case sun:
        printf("\n Sunday");
        break;
    case mon:
        printf("\n Monday");
        break;
    case tue:
        printf("\n Tuesday");
        break;
    case wed:
        printf("\n Wednesday");
        break;
    case thurs:
        printf("\n Thursday");
        break;
    case fri:
        printf("\n Friday");
        break;
    case sat:
        printf("\n Saturday");
        break;
    default:
        printf("Invalid Input!!");
        break;
    }
    return 0;
}