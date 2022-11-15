#include<stdio.h>

void in_Matrix(int a[][3])
{
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            scanf("%d",&a[i][j]);
}

void out_Matrix(int a[][3])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            printf("%d  ",a[i][j]);
        printf("\n");
    }
}

void add_Matrix(int a[][3], int b[][3], int c[][3])
{
    printf("Addition of Matrices is : \n");
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            c[i][j] = a[i][j] + b[i][j];
    out_Matrix(c);
}

void substract_Matrix(int a[][3], int b[][3], int c[][3])
{
    printf("Substraction of Matrices is : \n");
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            c[i][j] = a[i][j] - b[i][j];
    out_Matrix(c);
}

void multiply_Matrix(int a[][3], int b[][3], int c[][3])
{
    printf("Multiplication of Matrices is : \n");
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            for(int k=0; k<3; k++)
                c[i][j] += (a[i][k] * b[k][j]);
    out_Matrix(c);    
}

void transpose_Matrix(int a[][3], int b[][3])
{
    printf("Transpose of Matrix is : \n");
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            b[i][j] = a[j][i];
    out_Matrix(b);
}

void main()
{
    int first[3][3], second[3][3], ans[3][3]={0}, cases;
    printf("Enter the First Matrix : \n");
    in_Matrix(first);
    printf("Enter the Second Matrix : \n");
    in_Matrix(second);
            printf("Enter the serial number to perform corresponding Operation.\n");
            printf(" 1. Addition\n 2. Substraction\n 3. Multiplication \n 4. Transpose \n");
            scanf("%d",&cases);
            switch (cases)
            {
                case 1: add_Matrix(first, second, ans);
                        break;
                case 2: substract_Matrix(first, second, ans);
                        break;
                case 3: multiply_Matrix(first, second, ans);
                        break;
                case 4: printf("Enter Matrix number to transpose(1 OR 2) : ");
                        int a;
                        scanf("%d",&a);
                        switch(a)
                        {
                            case 1: transpose_Matrix(first, ans);
                                    break;
                            case 2: transpose_Matrix(second, ans);
                                    break;
                            default: printf("Indvalid Matrix number!!!");
                        }  
                        break;
                default: printf("Invalid Operation!!!");
            }
}