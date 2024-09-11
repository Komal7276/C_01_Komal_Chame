/*
Write a program of while loop to print the Table of any Number,
take input number from user.
*/

#include<stdio.h>
#include<conio.h>

void Table(int ino1)
{
    int n=1;
    while(n<=10)
    {
        printf("%d\n",(n*ino1));
        n++;
    }

}

int main()
{
    int ivalue1;

    printf("Enter a number which numbers table you want\n");
    scanf("%d",&ivalue1);
    
    Table(ivalue1);

    return 0;
}