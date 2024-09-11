/*
Write a program of while loop to print the square of numbers,
take input from user.
*/

#include<stdio.h>
#include<conio.h>

void Square(int ino1,int ino2)
{
    printf("\nSquares :\n");

    while(ino1<=ino2)
    {
        printf("%d=[%d]\n",ino1,(ino1*ino1));
        ino1++;
    }
}

int main()
{
    int ivalue1,ivalue2;

    printf("Enter Numbers to Print the Squares:\n\n");
    printf("Enter the First Number\n");
    scanf("%d",&ivalue1);
    printf("Enter the Last Number\n");
    scanf("%d",&ivalue2);

    Square(ivalue1,ivalue2);

    return 0;
}