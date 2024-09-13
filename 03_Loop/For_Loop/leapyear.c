/*
Write a program of for loop to print the Leapyear,
take inout from user.
*/

#include<stdio.h>
#include<conio.h>

void LeapYear(int ino1,int ino2)
{
    int i;

    printf("LeapYears :\n");
    
    for(i=ino1;i<=ino2;i++)
    {
        if(i%4==0)
        {
        printf("%d\n",i);
        }
    }
}

int main()
{
    int ivalue1,ivalue2;

    printf("Enter the First LeapYear\n");
    scanf("%d",&ivalue1);
    printf("Enter the Last LeapYear\n");
    scanf("%d",&ivalue2);

    LeapYear(ivalue1,ivalue2);

    return 0;
}