/*
Write a program to print the patterns,
using function,


1.1  2  3  4  5 
  6  7  8  9  10
  11 12 13 14 15 
  16 17 18 19 20
  21 22 23 24 25
  
2.1  3  5  7  9
  11 13 15 17 19
  21 23 25 27 29
  31 33 35 37 39
  41 43 45 47 49


3.2   4   6   8   10
  12  14  16  18  20
  22  24  26  28  30
  32  34  36  38  40
  42  44  46  48  50


4.1   2   3   4   5
  2   4   6   8   10
  3   6   9  12   15
  4   8  12  16   20
  5  10  15  20   25


5.1 1 2 1 3 1
  1 2 2 2 3 2
  1 3 2 3 3 3
  1 4 2 4 3 4 
  1 5 2 5 3 5
*/

#include<stdio.h>

int pattern1()
{
    int i,j;
    int n=5;
    int k=1;

    for(i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++)
      {
        printf("%2d ",k);
        k++;
      }

      printf("\n");
    }
}

int pattern2()
{
  int i,j;
  int n=5;
  int k=1;

  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      printf("%2d ",k);
      k=k+2;
    }

    printf("\n");

  }
}

int pattern3()
{
  int i,j;
  int n=5;
  int k=2;

  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      printf("%2d ",k);
      k=k+2;
    }

    printf("\n");
  }
}

int pattern4()
{
    int i,j;
    int n=5;

    for(i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++)
      {
        printf("%2d ",(i*j));
      }

      printf("\n");
    }
}

int pattern5()
{
    int i,j;
    int n=5;

    for(i=1;i<=n;i++)
    {
      for(j=1;j<=3;j++)
      {
        printf("%2d %2d ",j,i);
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
