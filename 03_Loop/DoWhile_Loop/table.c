/*
Write a program of dowhile loop to print the Table of any Number,
take input number from user.
*/

#include<stdio.h>
#include<conio.h>

void Table(int ino1)
{
    int n=1;
    
    do
    {
        printf("%d\n",(n*ino1));
        n++;
    }
    while(n<=10);

}

int main()
{
    int ivalue1;

    printf("Enter a number which numbers table you want\n");
    scanf("%d",&ivalue1);
    
    Table(ivalue1);

    return 0;
}