/*
write a program of switch using function,
to check the number is positive ,negative or zero,
take input number from user.
*/

#include<stdio.h>
#include<conio.h>

void CheckNum(int ino)
{
    switch(ino>0)
    {
        case 1:
        printf("%d is Positive",ino);
        break;

        case 0:

        switch(ino<0)
        {
            case 1:
            printf("%d is Negative",ino);
            break;

            case 0:
            printf("Number is Zero");
            break;
        }
    }
}

int main()
{
    int ivalue;

    printf("Enter any number\n");
    scanf("%d",&ivalue);

    CheckNum(ivalue);

    return 0;
}
