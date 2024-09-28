/*
Write a program to print the patterns,
using function,

1. *
   * * 
   * * *
   * * * *
   * * * * *
   
2. 1
   2 2 
   3 3 3 
   4 4 4 4 
   5 5 5 5 5 

3. 1
   1 2 
   1 2 3 
   1 2 3 4
   1 2 3 4 5

4. 5
   4 4 
   3 3 3
   2 2 2 2 
   1 1 1 1 1 

5. 5 
   5 4 
   5 4 3
   5 4 3 2 
   5 4 3 2 1

6. 5
   4 5
   3 4 5
   2 3 4 5 
   1 2 3 4 5  

*/

#include<stdio.h>

int pattern1()
{
    int i,j;
    int n=5;

    for(i=1;i<=n;i++)
    {
      for(j=1;j<=i;j++)
      {
         printf("* ");
      }

      printf("\n");
    }
}

int pattern2()
{
   int i,j;
   int n=5;

   for(i=1;i<=n;i++)
   {
      for(j=1;j<=i;j++)
      {
         printf("%d ",i);
      }

      printf("\n");
   }
}

int pattern3()
{
   int i,j;
   int n=5;

   for(i=1;i<=n;i++)
   {
      for(j=1;j<=i;j++)
      {
         printf("%d ",j);
      }

      printf("\n");
   }
}

int pattern4()
{
   int i,j;
   int n=5;

   for(i=5;i>=1;i--)
   {
      for(j=5;j>=i;j--)
      {
         printf("%d ",i);
      }

      printf("\n");

   }
}

int pattern5()
{
   int i,j;
   int n=5;

   for(i=5;i>=1;i--)
   {
      for(j=5;j>=i;j--)
      {
         printf("%d ",j);
      }

      printf("\n");
   }
}

int pattern6()
{
   int i,j;
   int n=5;

   for(i=5;i>=1;i--)
   {
      for(j=i;j<=n;j++)
      {
         printf("%d ",j);
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