/*write a program of if-else using function .
1.number is even or odd
2.year is leapyear or not,
take input from user.*/ 


#include<stdio.h>
#include<conio.h>

void even(int ino1)
{
    if(ino1%2==0)
    {
        printf("%d is Even Number",ino1);
    }
    else
    {
        printf("%d is Odd Number",ino1);
    }
}

void leapyear(int ino2)
{
    if(ino2%4==0)
    {
        printf("%d is Leap Year",ino2);
    }
    else
    {
        printf("%d is Not Leap Year",ino2);
    }
}

int main()
{
    int ivalue1,ivalue2;

    printf("Enter any number\n");
    scanf("%d",&ivalue1);
    even(ivalue1);

    printf("\n\nEnter any Year\n");
    scanf("%d",&ivalue2);
    leapyear(ivalue2);

    return 0;

}