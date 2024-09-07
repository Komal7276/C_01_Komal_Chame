/*
write a program of if-else ladder using function,
find out the grade depending upon the marks,
take input from user.
*/

#include<stdio.h>
#include<conio.h>

void marks(int ino)
{
    if(ino>90 && ino<=100)
    {
        printf("You got A grade");
    }

    else if(ino>70 && ino<=90)
    {
        printf("You got B grade");
    }

    else if(ino>50 && ino<=70)
    {
        printf("You got C grade");
    }

    else if(ino>=35 && ino<=50)
    {
        printf("You are Pass");
    }

    else if(ino>=0 && ino<35)
    {
        printf("You are Fail");
    }

    else
    {
        printf("Invalid Marks");
    }

}

int main()
{
    int mark;
    printf("Enter Your Marks\n");
    scanf("%d",&mark);

    marks(mark);

    return 0;   
}