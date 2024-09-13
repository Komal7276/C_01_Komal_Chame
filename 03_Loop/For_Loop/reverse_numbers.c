/*
Write a program of for loop to print the Natural Numbers in Reverse order,
take inout from user.
*/

#include<stdio.h>
#include<conio.h>

void Numbers(int ino1,int ino2)
{
    int i;

    printf("Numbers :\n");

    for(i=ino1;i>=ino2;i--)
    {
        printf("%d\n",i);
    }
}

int main()
{
    int ivalue1,ivalue2;

    printf("Enter the First Large Number\n");
    scanf("%d",&ivalue1);
    printf("Enter the Last small Number\n");
    scanf("%d",&ivalue2);

    Numbers(ivalue1,ivalue2);

    return 0;
}