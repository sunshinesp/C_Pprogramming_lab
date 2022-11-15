#include <stdio.h>

int countstr(char s[])
{
    int count = 0;
    for(int i=0; s[i] != '\0'; i++)
        count++;
    return count;
}

void revstr(char s[])
{
    char rev[50];
    int n = countstr(s),i;
    for(i=0; i < n; i++)
        rev[i] = s[n-i-1];
    rev[i] = '\0';
    printf("Reverse of String is : %s", rev);
}

void cpystr(char s1[], char s2[])
{
    int i;
    for(i=0; i<countstr(s1); i++)
        s2[i] = s1[i];
    s2[i] = '\0';
}

void cvcount(char s[])
{
    int vowel=0,consonant=0;
    for(int i=0; s[i] != '\0'; i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || 
           s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            vowel++;
        else
            consonant++;
    }
    printf("\nNo. of Vowels : %d   \nNo. of Consonants : %d",vowel,consonant);
}

int punctuation(char str[])
{
    int pcount = 0;
    for(int i=0; str[i] != '\0'; i++)
    {
        if(str[i] == '!' || str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '?' ||   
           str[i] == '-' || str[i] == '\'' || str[i] == '\"' || str[i] == ':')
                pcount++;
    }
    return pcount;
}

void arrange(char s[])
{
    int n=countstr(s),i;
    char temp;
    for(i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(s[j] < s[i])
            {
                temp = s[j];
                s[j] = s[i];
                s[i] = temp;
            }
        }
    }
    s[i] = '\0';
}

int main()
{
    int choice;
    char str[50],str2[50],ch='y';
    printf("Enter a string : ");
    scanf("%s",str);
    printf("\n1. Length of String.");
    printf("\n2. Reverse of String.");
    printf("\n3. Copy the String.");
    printf("\n4. count no. of Vowels & Consonants.");
    printf("\n5. Count no. of Punctuation.");
    printf("\n6. Arrange in Alphabatical Order.");
    
    while(ch == 'y' || ch == 'Y')
    {
        printf("\n\nEnter Serial no. to perform Operation : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1 :
            printf("Length of String is : %d\n",countstr(str));
            break;
        case 2 :
            revstr(str);
            break;
        case 3 :
            cpystr(str,str2);
            printf("\nString S2 after copy : %s", str2);
            break;
        case 4 :
            cvcount(str);
            break;
        case 5 :
            printf("\nNo. of Punctuations : %d", punctuation(str));
            break;
        case 6 :
            arrange(str);
            printf("\nArranged String is  : %s", str);
            break;
        default:
            printf("Invalid Choice!!!");
            break;
        }
        fflush(stdin);
        printf("\nDo you want to perform more operation(y/n) : ");
        scanf("%c",&ch);
    } 
    return 0;
}