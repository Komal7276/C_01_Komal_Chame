/*
Write a program of while loop to print Even Numbers,
take input number from user.
*/

#include<stdio.h>
#include<conio.h>

void CheckEven(int ino1,int ino2)
{
    printf("\nEven Numbers :\n");

    while(ino1<=ino2)
    {
        if(ino1%2==0)
        {
        printf("%d\n",ino1);
        }
        ino1++;
    }

}

int main()
{
    int ivalue1,ivalue2;

    printf("Enter First Number\n");
    scanf("%d",&ivalue1);
    printf("Enter Last Number\n");
    scanf("%d",&ivalue2);

    CheckEven(ivalue1,ivalue2);

    return 0;
}