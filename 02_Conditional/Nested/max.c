/*
write a program of nested if-else,
 to findout the maximum number in between 3 numbers using function,
 take input from user. 
*/

#include<stdio.h>
#include<conio.h>

void CheckMax(int ino1,int ino2,int ino3)
{
    if(ino1>ino2)
    {
        if(ino1>ino3)
        {
            printf("%d is Maximum",ino1);
        }
        else
        {
            printf("%d is Maximum",ino3);
        }
    }

    else
    {
        if(ino2>ino3)
        {
            printf("%d is Maximum",ino2);
        }
        else
        {
            printf("%d is Maximum",ino3);
        }
    }
}

int main()
{
    int ivalue1,ivalue2,ivalue3;

    printf("Enter First Number\n");
    scanf("%d",&ivalue1);
    
    printf("Enter Second Number\n");
    scanf("%d",&ivalue2);
    
    printf("Enter Third Number\n");
    scanf("%d",&ivalue3);

    CheckMax(ivalue1,ivalue2,ivalue3);

    return 0;
}