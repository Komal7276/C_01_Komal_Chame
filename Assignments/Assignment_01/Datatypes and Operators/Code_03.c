/*Write a program to check if a 
given number is even or odd*/

#include<stdio.h>
#include<conio.h>

int CheckNum(int ino)
{
    if( ino % 2 == 0)
    {
        printf("\n%d is Even number",ino);
    }

    else
    {
        printf("\n%d is Odd number",ino);
    }
}


int main()
{
    int ivalue;

    printf("***** Check number is even or odd *****\n\n");

    printf("Enter any number : ");
    scanf("%d",&ivalue);

    CheckNum(ivalue);

    return 0;
}