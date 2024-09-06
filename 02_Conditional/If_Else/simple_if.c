//write a program of simple if ,take inout from user.

#include<stdio.h>
#include<conio.h>

void number(int ino)
{
    if(ino>0)
    {
        printf("\n%d is Positive Number",ino);
    }
}

int main()
{
    int ivalue;
    printf("Enter any number :\n");
    scanf("%d",&ivalue);

    number(ivalue);

    return 0;
}