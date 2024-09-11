/*
Write a program of while loop to print Reverse Leap Years,
take input number from user.
*/

#include<stdio.h>
#include<conio.h>

void CheckLeapyear(int ino1,int ino2)
{
    printf("\nLeap Years :\n");

    while(ino1>=ino2)
    {
        if(ino1%4==0)
        {
        printf("%d\n",ino1);
        }
        ino1--;
    }

}

int main()
{
    int ivalue1,ivalue2;

    printf("Enter First large Year\n");
    scanf("%d",&ivalue1);
    printf("Enter Last small  Year\n");
    scanf("%d",&ivalue2);

    CheckLeapyear(ivalue1,ivalue2);

    return 0;
}