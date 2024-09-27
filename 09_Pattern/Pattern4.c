/*
Write a program to print the patterns,
using function,

1. A A A A A 
   B B B B B
   C C C C C
   D D D D D
   E E E E E

2. A B C D E 
   A B C D E 
   A B C D E
   A B C D E
   A B C D E

3. E E E E E
   D D D D D
   C C C C C
   B B B B B 
   A A A A A

4. E D C B A
   E D C B A
   E D C B A
   E D C B A
   E D C B A

5. A B C D E
   F G H I J
   K L M N O
   P Q R S T
   U V W X Y

*/

#include<stdio.h>

int pattern1()
{
    char i,j;

    for(i='A';i<='E';i++)
    {
        for(j='A';j<='E';j++)
        {
            printf("%c ",i);
        }

        printf("\n");
    }
}

int pattern2()
{
    char i,j;

    for(i='A';i<='E';i++)
    {
        for(j='A';j<='E';j++)
        {
            printf("%c ",j);
        }

        printf("\n");
    }
}

int pattern3()
{
    char i,j;

    for(i='E';i>='A';i--)
    {
        for(j='E';j>='A';j--)
        {
            printf("%c ",i);
        }

        printf("\n");
    }
}

int pattern4()
{
    char i,j;

    for(i='E';i>='A';i--)
    {
        for(j='E';j>='A';j--)
        {
            printf("%c ",j);
        }

        printf("\n");
    }
}

int pattern5()
{
    int i,j;
    char n='A';

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%c ",n);
            n++;
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
    printf("--------------------------------------\n\n");
}

