/*Write a program to calculate the factorial of a number using a
while loop.*/

#include<stdio.h>
#include<conio.h>

int FindFact(int ino)
{
    int i=1;
    int fact=1;

    while(i<=ino)
    {
        fact=fact*i;
        i++;
    }

    printf("\nFactorial of %d is = %d",ino,fact);

    return 0;
}


int main()
{
    int ivalue;

    printf("\nEnter any number to find its factorial : ");
    scanf("%d",&ivalue);

    FindFact(ivalue);

    return 0;
}