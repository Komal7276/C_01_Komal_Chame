/*
Write a program to print the patterns,
using function,


1. 1 1 1 2 1 3 
   2 1 2 2 2 3 
   3 1 3 2 3 3
   4 1 4 2 4 3
   5 1 5 2 5 3

2. 1   6   11   16   21
   2   7   12   17   22
   3   8   13   18   23
   4   9   14   19   24
   5   10  15   20   25

3. 1   10   11   20   21
   2   9    12   19   22
   3   8    13   18   23
   4   7    14   17   24
   5   6    15   16   25


4. 5   10   15   20   25
   4   9    14   19   24
   3   8    13   18   23
   2   7    12   17   22
   1   6    11   16   21

5. 5   6   15   16   25
   4   7   14   17   24
   3   8   13   18   23
   2   9   12   19   22
   1   10  11   20   21

6. 1 2 3 4 5
   2 3 4 5 6
   3 4 5 6 7 
   4 5 6 7 8
   5 6 7 8 9

7. 1   3   5   7   9
   3   5   7   9   11
   5   7   9   11  13
   7   9   11  13  15
   9   11  13  15  17   

*/

#include<stdio.h>

int pattern1()
{
    int i,j;
    int n=5;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("%2d %2d ",i,j);
        }

        printf("\n");
    }
}

int pattern2()
{
    int i,j,x;
    int n=5;

    for(i=1;i<=n;i++)
    {
        x=i;

        for(j=1;j<=n;j++)
        {
            printf("%2d  ",x);
            x=x+n;

        }

        printf("\n");
    }
}

int pattern3()
{
    int i,j;
    int x,y;
    int n=5;

    for(i=1;i<=n;i++)
    {
        x=i;
        y=n-i+1;

        for(j=1;j<=n;j++)
        {
            if(j%2==1)
            {
                printf("%2d ",x);
            }

            else
            {
                printf("%2d ",y);
            }

            x=x+n;
            y=y+n;
        }

        printf("\n");               
    }
}

int pattern4()
{
    int i,j,x;
    int n=5;

    for(i=n;i>=1;i--)
    {
        x=i;

        for(j=1;j<=n;j++)
        {
            printf("%2d  ",x);
            x=x+n;
        }

        printf("\n");
    }
}

int pattern5()
{
    int i,j;
    int x,y;
    int n=5;

    for(i=1;i<=n;i++)
    {
        x=i;
        y=n-i+1;

        for(j=1;j<=n;j++)
        {
            if(j%2==0)
            {
                printf("%2d  ",x);
            }

            else
            {
                printf("%2d ",y);
            }

            x=x+n;
            y=y+n;
        }

        printf("\n");
    }
}

int pattern6()
{
   int i,j,k;
   int n=5;

   for(i=1;i<=n;i++)
   {
      k=i;

      for(j=1;j<=n;j++)
      {
         printf("%2d ",k);
         k++;

      }

      printf("\n");
   }
}

int pattern7()
{
   int i,j,k;
   int n=5,m=1;

   for(i=1;i<=n;i++)
   {
      k=m;

      for(j=1;j<=n;j++)
      {
         printf("%2d ",k);
         k=k+2;
      }

      m=m+2;
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
    pattern7();
    printf("\n\n");
    printf("--------------------------------------\n\n");
}
