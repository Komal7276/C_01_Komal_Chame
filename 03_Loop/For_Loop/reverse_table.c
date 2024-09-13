/*
Write a program of for loop to print the Table of any Number in Reverse order,
take inout from user.
*/

#include<stdio.h>
#include<conio.h>

void Table(int ino1)
{
    int i;

    printf("Table :\n");
    
    for(i=10;i>=1;i--)
    {
        printf("%d\n",(i*ino1));
    }
}

int main()
{
    int ivalue1,ivalue2;

    printf("Enter the Number which numbers table you want\n");
    scanf("%d",&ivalue1);

    Table(ivalue1);

    return 0;
}