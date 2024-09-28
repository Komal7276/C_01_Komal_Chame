/*
Write a program to print the patterns,
using function,

1. 2
   2 4
   2 4 6 
   2 4 6 8
   2 4 6 8 10

2. 1
   2 3 
   4 5 6
   7 8 9 10

3. 1 
   2 3
   3 4 5 
   4 5 6 7 
   5 6 7 8 9

4. 1 
   3   5
   5   7   9
   7   9   11   13
   9   11  13   15   17


5. 1 
   3   5
   7   9   11
   13  15  17  19
   21  23  25  27  29

6. 2 
   4   6
   8   10  12
   14  16  18  20
   22  24  26  28  30

*/

#include<stdio.h>

int pattern1()
{
    int i,j;
    int n=5,k=2,m;

    for(i=1;i<=n;i++)
    {
        m=k;

        for(j=1;j<=i;j++)
        {
            printf("%2d ",m);
            m=m+2;
        }

        printf("\n");
    }
}

int pattern2()
{
    int i,j;
    int n=4,k=1;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%2d  ",k);
            k++;      
        }

        printf("\n");
    }
}

int pattern3()
{
    int i,j;
    int n=5,k;

    for(i=1;i<=n;i++)
    {
        k=i;

        for(j=1;j<=i;j++)
        {
            printf("%2d  ",k);
            k++;
        }

        printf("\n");
    }
}

int pattern4()
{
    int i,j;
    int n=5,k=1,m;

    for(i=1;i<=n;i++)
    {
        m=k;

        for(j=1;j<=i;j++)
        {
            printf("%2d  ",m);
            m=m+2;
        }

        k=k+2;
        printf("\n");
    }
}


int pattern5()
{
    int i,j;
    int n=5,k=1;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%2d  ",k);
            k=k+2;
        }

        printf("\n");
    }
}

int pattern6()
{
    int i,j;
    int n=5,k=2;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%2d  ",k);
            k=k+2;
        }

        printf("\n");
    }

}


int main()
{
    printf("--------------------------------------\n\n");
    pattern1();
    printf("\n\n");
    printf("--------------------------------------\n\n");
    pattern2();
    printf("\n\n");
    printf("--------------------------------------\n\n");
    pattern3();
    printf("\n\n");
    printf("--------------------------------------\n\n");
    pattern4();
    printf("\n\n");
    printf("--------------------------------------\n\n");
    pattern5();
    printf("\n\n");
    printf("--------------------------------------\n\n");
    pattern6();
    printf("\n\n");
    printf("--------------------------------------\n\n");
    
}