/*Write a program to print the multiplication table of a number
using a for loop.*/

#include<stdio.h>
#include<conio.h>

int CalculateTable(int ino)
{
    int i;

    printf("\n%d's Table \n\n",ino);

    for(i=1;i<=10;i++)
    {
        printf("%d\n",(i*ino));
    }

    return 0;
}


int main()
{
    int ivalue;

    printf("Enter any number to print its table : ");
    scanf("%d",&ivalue);

    CalculateTable(ivalue);

    return 0;
}