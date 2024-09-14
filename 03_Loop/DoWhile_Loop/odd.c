/*
Write a program of dowhile loop to print Odd Numbers,
take input number from user.
*/

#include<stdio.h>
#include<conio.h>

void CheckOdd(int ino1,int ino2)
{
    do
    {
        if(ino1%2==1)
        {
            printf("%d\n",ino1);
        }
        ino1++;
    }
    while(ino1<=ino2);

}

int main()
{
    int ivalue1,ivalue2;

    printf("Enter First Number\n");
    scanf("%d",&ivalue1);
    printf("Enter Last Number\n");
    scanf("%d",&ivalue2);

    CheckOdd(ivalue1,ivalue2);

    return 0;
}