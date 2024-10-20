/*Write an function that takes two numbers and returns the
maximum.*/

#include<stdio.h>
#include<conio.h>

int CheckMax(int ino1,int ino2)
{
    if(ino1<ino2)
    {
        return ino2;
    }

    else
    {
        return ino1;
    }

}


int main()
{
    int ivalue1,ivalue2;
    int result;

    printf("\nEnter first number :");
    scanf("%d",&ivalue1);

    printf("\nEnter second number :");
    scanf("%d",&ivalue2);

    result = CheckMax(ivalue1,ivalue2);

    printf("Maximum number is = %d",result);

    return 0;

}