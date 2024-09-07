    /* write a program of if-else ladder,
find the number of days in month using function,
take input month number from user.
*/

#include<stdio.h>
#include<conio.h>

void CheckDay(int ino)
{
    if(ino==1)
    {
        printf(" 31 days in JANUARY");
    }

    else if(ino==2)
    {
        printf(" 28 days in FEBRUARY");
    }

    else if(ino==3)
    {
        printf(" 31 days in MARCH");
    }

    else if(ino==4)
    {
        printf(" 30 days in APRIL");
    }

    else if(ino==5)
    {
        printf(" 31 days in MAY");
    }

    else if(ino==6)
    {
        printf(" 30 days in JUNE");
    }

    else if(ino==7)
    {
        printf(" 31 days in JULY");
    }

    else if(ino==8)
    {
        printf(" 31 days in AUGUST");
    }

    else if(ino==9)
    {
        printf(" 30 days in SEPTEMBER");
    }

    else if(ino==10)
    {
        printf(" 31 days in OCTOBER");
    }

    else if(ino==11)
    {
        printf(" 30 days in NOVEMBER");
    }
    else if(ino==12)
    {
        printf(" 31 days in DECEMBER");
    }

    else
    {
        printf("Invalid month number..");
    }
}

int main()
{
    int num;
    printf("Enter month number :\n");
    scanf("%d",&num);

    CheckDay(num);

    return 0;
}