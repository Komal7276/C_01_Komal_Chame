/*Write a program that checks whether a given number is
positive, negative, or zero using an if-else statement.*/

#include<stdio.h>
#include<conio.h>

int CheckNum(int ino)
{
    if(ino>0)
    {
        printf("\n%d is Positive Number",ino);
    }

    else if(ino<0)
    {
        printf("\n%d is Negative Number",ino);
    }

    else
    {
        printf("\n%d is Zero",ino);
    }

    return 0;
}


int main()
{
    int ivalue;

    printf("\nCheck the number is positive , negative or zero ...\n\n");

    printf("Enter any number : ");
    scanf("%d",&ivalue);

    CheckNum(ivalue);

    return 0;
}
