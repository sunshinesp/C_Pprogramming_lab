#include <stdio.h>
#include <string.h>

int main()
{
    char str[50], str2[20];
    printf("Enter first string : ");
    scanf("%s", str);
    printf("Enter  second string : ");
    scanf("%s", str2);
    printf("\nLength of first string is : %d", strlen(str));
    printf("\nComparing both the strings : ");
    if(! strcmp(str, str2))
        printf("Same");
    else
        printf("Not Same");
    printf("\nReversed string is : %s", strrev(str));
    strcpy(str2, str);
    printf("\ncopied string is : %s", str2);
    printf("\nConcatenation of both strings : %s", strcat(str,str2));
    return 0;
}