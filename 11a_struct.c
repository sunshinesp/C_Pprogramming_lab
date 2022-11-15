# include <stdio.h>

struct student {
    int roll;
    char name[20];
    int age;
};

void input_student(struct student s[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("\nEnter Name of student : ");
        scanf("%s",s[i].name);
        printf("Enter Roll no. of student : ");
        scanf("%d",&s[i].roll);
        printf("Enter Age of student : ");
        scanf("%d",&s[i].age);
    }   
}

void output_student(struct student s[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("\nRoll no. : %d", s[i].roll);
        printf("\nName : %s", s[i].name);
        printf("\nAge : %d\n", s[i].age);
    } 
}

int  main()
{
    struct student s[10];
    int n=0;
    printf("\nSize of structure student is : %d\n",sizeof(s[0]));
    printf("address of s[0] : %p",&s[0]);
    printf("\nEnter no. of students : ");
    scanf("%d", &n);
    printf("\nEnter Student Details : \n");
        input_student(s,n);
    printf("\nStudent Details are : \n");
        output_student(s,n);
    return 0;
}