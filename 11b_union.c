#include <stdio.h>

union mca {
    int roll;
    char name[20];
    int age;
};

void print_union(union mca s);

int main()
{
    union mca s;
    printf("\nSize of Union MCA is : %d",sizeof(s));
    printf("\nAddress of s is : %p", &s);

    printf("\nEnter Roll no. : ");
    scanf("%d",&s.roll);
    print_union(s);

    printf("\n\nEnter Age : ");
    scanf("%d",&s.age);
    print_union(s);

    printf("\n\nEnter name : ");
    scanf("%s",s.name);
    print_union(s);
    return 0;
}

void print_union(union mca s)
{
    printf("\nroll : %d",s.roll);
    printf("\nage : %d", s.age);
    printf("\nname : %s",s.name);
}