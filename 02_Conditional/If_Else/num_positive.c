/*write a program of if-else using function to check whether a number is positive or negative,
take input from user. */


#include<stdio.h>
#include<conio.h>

void number(int ino)
{
    if(ino>0)
    {
        printf("%d is Positive Number",ino);
    }
    else
    {
        printf("%d is Negative Number",ino);
    }
}

int main()
{
    int ivalue;
    printf("Enter a number\n");
    scanf("%d",&ivalue);
    number(ivalue);

    return 0;
}