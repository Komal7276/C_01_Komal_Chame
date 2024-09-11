/*
Write a program of while loop to print a Natural Numbers,
take input number from user.
*/

#include<stdio.h>
#include<conio.h>

void Numbers(int ino1,int ino2)
{
    while(ino1<=ino2)
    {
        printf("%d\n",ino1);
        ino1++;
    }

}

int main()
{
    int ivalue1,ivalue2;

    printf("Enter First Natural Number\n");
    scanf("%d",&ivalue1);
    printf("Enter Last Natural Number\n");
    scanf("%d",&ivalue2);

    Numbers(ivalue1,ivalue2);

    return 0;
}