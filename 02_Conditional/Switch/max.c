/*
write a program of switch using function,
to find the maximum number in between 2 numbers,
take input number from user. 
*/

#include<stdio.h>
#include<conio.h>

void CheckMax(int ino1,int ino2)
{
    switch(ino1>ino2)
    {
        case 1:
        printf("%d is Greater",ino1);
        break;

        case 0:

        switch(ino1<ino2)
        {
            case 1:
            printf("%d is Greater",ino2);
            break;

            case 0:
            printf("%d is Equal to %d",ino1,ino2);
            break;
        }
    }
}

int main()
{
    int ivalue1,ivalue2;

    printf("Enter First Number\n");
    scanf("%d",&ivalue1);

    printf("Enter Second Number\n");
    scanf("%d",&ivalue2);

    CheckMax(ivalue1,ivalue2);

    return 0;
}