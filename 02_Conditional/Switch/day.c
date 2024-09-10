/*
write a program of switch using function,
to print name of weekday ,
take input from user.
*/

#include<stdio.h>
#include<conio.h>

void CheckDay(int ino)
{
    switch(ino)
    {
        case 1:
        printf("Monday");
        break;

        case 2:
        printf("Tuesday");
        break;

        case 3:
        printf("Wednesday");
        break;

        case 4:
        printf("Thursday");
        break;

        case 5:
        printf("Friday");
        break;

        case 6:
        printf("Saturday");
        break;

        case 7:
        printf("Sunday");
        break;

        default :
        printf("Invalid Number ..");
        
    }
}

int main()
{
    int day;
    
    printf("Enter a week day number\n");
    scanf("%d",&day);

    CheckDay(day);

    return 0;
}