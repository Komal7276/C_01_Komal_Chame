/*
Write a program of factorial using function,
take input from user.
*/

#include<stdio.h>

int factorial(int ino)
{
    int fact=1;
    int i;

    for(i=1;i<=ino;i++)
    {
        fact=fact*i;
    }

    return fact;
}

int main()
{
    int ivalue;
    int result;

    printf("Enter a number to find its factorial :");
    scanf("%d",&ivalue);

    result=factorial(ivalue);

    printf("Factorial of %d is = [%d]\n",ivalue,result);

    return 0;
}