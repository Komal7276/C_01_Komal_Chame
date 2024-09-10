/*
write a program of switch using function,
to print name and days in month depending upon the month number ,
take input from user.
*/

#include<stdio.h>
#include<conio.h>

void CheckMonth(int ino)
{
    switch(ino)
    {
        case 1:
        printf(" 31 days in January");
        break;

        case 2:
        printf(" 28 days in February");
        break;

        case 3:
        printf("31 days in March");
        break;

        case 4:
        printf("30 days in April");
        break;

        case 5:
        printf("31 days in May");
        break;

        case 6:
        printf("30 days in June");
        break;

        case 7:
        printf("31 days in July");
        break;

        case 8:
        printf(" 31 days in August");
        break;

        case 9:
        printf("30 days in September");
        break;

        case 10:
        printf("31 days in October");
        break;

        case 11:
        printf("30 days in November");
        break;

        case 12:
        printf("31 days in December");
        break;

        default :
        printf("Invalid Number ..");
        
    }
}

int main()
{
    int month;
    
    printf("Enter a month number\n");
    scanf("%d",&month);

    CheckMonth(month);

    return 0;
}