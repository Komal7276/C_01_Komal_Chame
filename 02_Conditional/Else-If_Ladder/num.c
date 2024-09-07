/*
write a program of if-else ladder using function,
to check the number is positive,negative or zero,
take input from user.
*/

#include<stdio.h>
#include<conio.h>

void CheckNum(int ino)
{
    if(ino>0)
    {
        printf("%d is Positive number",ino);
    }

    else if(ino<0)
    {
        printf("%d is Negative number",ino);
    }

    else if(ino==0)
    {
        printf("It is zero");
    }

    else
    {
        printf("It is not a Number");
    }
}

int main()
{
    int ivalue;
    printf("Enter a number\n");
    scanf("%d",&ivalue);
    CheckNum(ivalue);

    return 0;
}