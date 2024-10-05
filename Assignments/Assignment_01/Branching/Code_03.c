/*Write a switch-case program that takes a day of the week as
input and prints the corresponding day name (e.g., 1 =
Monday).*/

#include<stdio.h>
#include<conio.h>

int CheckDay(int ino)
{
    switch(ino)
    {
        case 1:
        printf("\n%d = Monday",ino);
        break;

        case 2:
        printf("\n%d = Tuesday",ino);
        break;

        case 3:
        printf("\n%d = Wednesday",ino);
        break;

        case 4:
        printf("\n%d = Thursday",ino);
        break;

        case 5:
        printf("\n%d = Friday",ino);
        break;

        case 6:
        printf("\n%d = Saturday",ino);
        break;

        case 7:
        printf("\n%d = Sunday",ino);
        break;

        default :
        printf("\nInvalid number !! Please enter a number between 1 to 7");
        
        
    }

    return 0;

}


int main()
{
    int day;

    printf("\n***** Check Week Days *****\n\n");

    printf("Enter a number between 1 to 7 : ");
    scanf("%d",&day);

    CheckDay(day);

    return 0;
}
